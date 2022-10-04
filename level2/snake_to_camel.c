#include <libc.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		for(int i = 0;argv[1][i];i++)
		{
			if(argv[1][i] == '_' )
			{
				i++;
				if(97 <= argv[1][i] && argv[1][i] <= 122)
					argv[1][i] -= 32;
			}
				write(1,&argv[1][i],1);
		}
	}
	write(1,"\n",1);
}