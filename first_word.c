#include <unistd.h>

int ft_iss(int c)
{
	return( (9 <= c && c <= 12) || c == ' ');
}

int main(int argc,char **argv)
{
	int i = 0;
	if(argc == 2)
	{
		while(ft_iss(argv[1][i]))
			i++;
		while((!ft_iss(argv[1][i])) && argv[1][i])
			write(1,&argv[1][i++],1);
	}
	write(1,"\n",1);
	return (0);
}