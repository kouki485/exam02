#include <stdio.h>

size_t ft_strlen(char *str)
{
	size_t i = 0;

	while(str[i])
		i++;
	return (i);
}

int main()
{
	printf("%zu\n",ft_strlen("hello"));
}