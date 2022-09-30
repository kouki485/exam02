#include <unistd.h>


int main(int argc,char **argv)
{
	int j = 0;
	if(argc == 2)
	{
		for(int i = 0;argv[1][i];i++)
			if(argv[1][i] == ' ' && 33 <= argv[1][i + 1] && argv[1][i + 1] <= 126)
				j = i + 1;
		while(33 <= argv[1][j] && argv[1][j] <= 126)
			write(1,&argv[1][j++],1);
	}
	write(1,"\n",1);
}