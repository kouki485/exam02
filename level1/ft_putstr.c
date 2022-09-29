#include <unistd.h>

// size_t ft_strlen(char *str)
// {
// 	size_t i = 0;

// 	while(str[i])
// 		i++;
// 	return (i);
// }

// void ft_putstr(char *str)
// {
// 	for (int i = 0;i <= ft_strlen(str);i++) write(1,&str[i],1);
// }

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
		write(1,&str[i++],1);
}
