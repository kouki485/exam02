#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int tmp;
	int i = 0;

	while(i <(size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
		
	}
}

int main()
{
	int base[10] = {6,5,9,3,4,2,8,2,6};
	sort_int_tab(base,10);
	for (int i = 0;i < 10;i++)
		printf("[%d] : %d\n",i,base[i]);
}