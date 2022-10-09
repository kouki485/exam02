#include <stdio.h>

int is_ts(char c)
{
	return(9 <= c && c <= 12 || c == ' ');
}

int test_base(char c)
{
	if('0' <= c && c <= '9')
		return (c - '0');
	else if('a' <= c && c <= 'z')
		return (c - 'a' + 10);
	else if('A' <= c && c <= 'Z')
		return (c - 'A' + 10);
	else
		return (-1);
}

int ft_atoi_base(const char *str,int str_base)
{
	int i = 0;
	int flag = 1;
	int current;
	int n = 0;
	while(is_ts(str[i]))
		i++;
	if(str[i] == '-')
		flag = -1;
	if(str[i] == '-' || str[i] == '+')
		i++;
	current = test_base(str[i]);
	while(current >= 0 && current <str_base)
	{
		n = n * str_base + current;
		i++;
		current = test_base(str[i]);
	}
	return(n * flag);
	
}

int main()
{
	int i = ft_atoi_base("-158",10);
	printf("%d\n",i);
}