#include <unistd.h>
#include <stdio.h>

int		test_base(const char c)
{
	int		nb;

	if (c >= '0' && c <= '9')
		nb = c - '0';
	else if (c >= 'a' && c <= 'z')
		nb = c - 'a' + 10;
	else if (c >= 'A' && c <= 'Z')
		nb = c - 'A' + 10;
	else
		nb = -1;
	return (nb);
}

int ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int flag = 1;
	int n;
	int current;

		while(str[i] == '\t' || str[i] == '\n' ||str[i] == '\v' ||str[i] == '\f' ||str[i] == '\r' ||str[i] == ' ')
			i++;
		if(str[i] == '-')
			flag = -1;
		if(str[i] == '-' || str[i] == '+')
			i++;
		current = test_base(str[i]);
		while(current >= 0 && current < str_base)
		{
			n = n * str_base + current;
			i++;
			current = test_base(str[i]);
		}
	
	return(n * flag);
}

int main()
{
	int i = ft_atoi_base("-368",16);
	printf("%d\n",i);
}