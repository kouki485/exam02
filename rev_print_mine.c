#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}
int main(int argc,char **argv)
{
	if (argc == 2)
		for (int n = ft_strlen(argv[1]) - 1; n > -1; --n)
			write(1,&argv[1][n],1);
	write(1,"\n",1);
}
