#include <unistd.h>

void repeat(char c)
{
	if('a' <= c && c<= 'z')
		for(int i = c - 97; i > 0;i--)
			write(1,&c,1);
	if('A' <= c && c<= 'Z')
		for(int i = c - 65; i > 0;i--)
			write(1,&c,1);
	else
		write(1,&c,1);
}

int main(int argc,char **argv)
{
	if(argc == 2)
		for(int i = 0 ;argv[1][i]; i++)
			repeat(argv[1][i]);
	write(1,"\n",1);
}