#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	if (argc == 2)
	{
		for(i = 0;argv[1][i];i++)
		{
			if ('a' <= argv[1][i] && argv[1][i] <= 'z')
				argv[1][i] = (argv[1][i] - 'a' + 1) % 26 + 'a';
			if ('A' <= argv[1][i] && argv[1][i] <= 'Z')
				argv[1][i] = (argv[1][i] - 'A' + 1) % 26 + 'A';
			write(1,&argv[1][i],1);
		}
	}
	write(1,"\n",1);
}