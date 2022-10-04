#include <libc.h>

void ft_putstr(char const *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

int main(int argc,char **argv)
{
	int n = 0;
	if (argc == 3)
	{
		for(int i = 0;argv[2][i];i++)
				if(argv[2][i] == argv[1][n])
					n++;
		if (!argv[1][n])
			ft_putstr(argv[1]);
	}
	write(1,"\n",1);
}