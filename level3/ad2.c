#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int flag = 1;
	int n = 0;
	while(str[i])
	{
		if(9 <= str[i] && str[i] <= 12 || str[i] == ' ')
			i++;
		else if(str[i] == '-')
			flag = -1;
		else if(str[i] == '-' || str[i] == '+')
			i++;
		else if('0' <= str[i] && str[i] <= '9')
		{
			n = n * 10 + (str[i] - '0');
			i++;
		}
	}
	return (n * flag);
}

int isprime(int c)
{
	int i = 1;
	if(c < 2)
		return (0);
	if(c > 2 && c % 2 == 0)
		return (0);
	while(i < (c / 2))
	{
		if((c / i) % 2 == 0)
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
	int sum = 0;

	if (argc == 2)
	{
		int i = ft_atoi(argv[1]);
		for (int n = 0;n < i + 1;n++)
		{
			if(isprime(n))
				sum = sum + n;
		}
		putnum(sum);
		write(1,"\n",1);
		return (0);
	}
	putnum(0);
	write(1,"\n",1);
}