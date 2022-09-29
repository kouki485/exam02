#include <stdio.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int flag = 1;
	int n;

	while(str[i])
	{
		if (str[i] == '\t' || str[i] == '\n' ||str[i] == '\v' ||str[i] == '\f' ||str[i] == '\r' ||str[i] == ' ')
			i++;
		if(str[i] == '-')
			flag = -1;
		if(str[i] == '-' || str[i] == '+')
			i++;
		if('0' <= str[i] && str[i] <= '9')
		{
			n =  n * 10 + (str[i] - '0') ;
			i++;
		}
	}
	return(n * flag);
}
