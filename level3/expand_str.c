#include <unistd.h>

int tos(char c)
{
	return(c == ' ' || c == '\t');
}

int main(int argc,char **argv)
{
	int i = 0;
	int flag;
	if (argc == 2)
	{
		while(tos(argv[1][i]))
			i++;
		while(argv[1][i])
		{
			if (tos(argv[1][i]))
				flag = 1;
			if (!tos(argv[1][i]))
			{
				if(flag)
					write(1,"   ",3);
				flag = 0;
				write(1,&argv[1][i],1);
			}
			i++;
		}
	}
	write(1,"\n",1);
}