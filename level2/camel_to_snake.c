#include <unistd.h>

int main(int argc,char **argv)
{
	if(argc == 2)
	{
		for(int i = 0;argv[1][i];i++)
		{
			if('a' <= argv[1][i] && argv[1][i] <= 'z')
				write(1,&argv[1][i],1);
			else if('A' <= argv[1][i] && argv[1][i] <= 'Z')
			{
				write(1,"_",1);
				argv[1][i] += 32;
				write(1,&argv[1][i],1);
			}

		}
	}
	write(1,"\n",1);
}