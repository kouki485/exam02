#include <unistd.h>

int is_tos(char c) //maeans tab or space
{
	return (c == ' ' || c == '\t');
}

int main(int argc,char **argv)
{
	int i = 0;
	int flag = 1;
	if (argc == 2)
	{
		while(is_tos(argv[1][i]))
			i++;
		while(argv[1][i])
		{
			if (is_tos(argv[1][i]))
				flag = 1;
			if(!is_tos(argv[1][i]))
			{
				if (flag)
					write(1," ",1);
				flag = 0;
				write(1,&argv[1][i],1);
			}
			i++;
		}
	}
	write(1,"\n",1);
}