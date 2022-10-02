#include <stdio.h>

int max(int *tab, unsigned int len)
{
	int i = 0;

	while(len--)
	{
		if (tab[len - 1] <= tab[len])
			return(tab[len]);
	}
	return (0);
}

int main()
{
	int i[7] = {2,3,3,1,5,3};


	printf("%d\n",max(i,6));
}