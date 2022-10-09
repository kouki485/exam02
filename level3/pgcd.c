#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv)
{
	if(argc == 3)
	{
		int i = atoi(argv[1]);
		int n = atoi(argv[2]);
		int k;
		if (i < n)
			k = i;
		else if (i > n)
			k = n;
		else if (i == n)
			printf("%d",i);
		
		while(1)
		{
			if(i % k == 0 && n % k == 0)
			{
				printf("%d\n",k);
				return (0);
			}
			k--;
		}
	}
	printf("\n");
}