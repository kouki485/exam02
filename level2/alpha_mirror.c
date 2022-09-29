#include <unistd.h>

int main(int argc,char **argv)
{
	if(argc == 2)
	{
		for(int i = 0;argv[1][i]; i++)
		{
			if('a'  <= argv[1][i] && argv[1][i] <='z')
				argv[1][i] = 25 - (argv[1][i] - 'a') + 'a';
			if('A'  <= argv[1][i] && argv[1][i] <='Z')
				argv[1][i] = 25 - (argv[1][i] - 'A') + 'A';
			write(1,&argv[1][i],1);
		}
	}
	write(1,"\n",1);
}