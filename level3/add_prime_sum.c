#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int i = 0;
	int flag = 1;
	int num = 0;
	while(str[i])
	{
		if((9 <= str[i] && str[i] <= 12) || str[i] == ' ')
			i++;
		if(str[i] == '-')
			flag *= -1;
		if(str[i] == '-' || str[i] == '+')
			i++;
		if('0' <= str[i] && str[i] <= '9')
		{
			 num =num * 10 + (str[i] - '0');
			 i++;
		}
	}
	return (num * flag);
}

int is_prime(int n)
{
	int i = 3;

	if(n < 2)
		return (0);
	if(n > 2 && n % 2 == 0)
		return (0);
	while(i < (n / 2))
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

void putnum(int c)
{
	char num[10] = "0123456789";

	if (c > 9)
		putnum(c / 10);
	write(1,&num[c % 10],1);
}

int main(int argc,char **argv)
{
	int n;
	int sum = 0;
	if(argc == 2)
	{
		int i = ft_atoi(argv[1]);
		while(i > 0)
			if (is_prime(i--))
				sum += (i + 1);
		putnum(sum);
		write(1,"\n",1);
		return (0);
	}
	putnum(0);
	write(1,"\n",1);
}