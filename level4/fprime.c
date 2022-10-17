#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = atoi(argv[1]);
		int i = 2;

		if (num == 1)
			printf("1");
		while(i <= num)
		{
			if(num % i == 0)
			{
				printf("%d",i);
				if (i == num)
					break;
				printf("*");
				num = num / i;
				i = 2;
			}
			i++;
		}
	}
	printf("\n");
}


