#include <unistd.h>

int iss(int c)
{
	return(9 <= c && c <= 12 || c == ' ');
}

int main(int argc,char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while(iss(argv[1][i]))
			i++;
		while(!iss(argv[1][i]) && argv[1][i])
			write(1,&argv[1][i++],1);
	}
	write(1,"\n",1);
}