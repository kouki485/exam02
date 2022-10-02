#include <stdlib.h>
#include <stdio.h>

int num_base(int n)
{
	int i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	if(n == 0)
	{
 		char *str = malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if(n > 0)
	{
		int k = num_base(n);//->3
 		char *str2 = malloc(sizeof(char) * k + 1);
		str2[k] = '\0';
		//int i = 0;
		while(str2[k])
		{
			str2[k] = n % 10 + '0';
			n = n / 10;
			k--;
		}
		return (str2);
	}
	return (0);
}

int main()
{

	
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(10));
	printf("%s\n",ft_itoa(156));
	printf("%s\n",ft_itoa(6950));
}


// str[3]
// 568 % 10 = 8
// (568 / 10) % 10 = 6
// (56 / 10) % 10 = 5