#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int mini_atoi(char *str)
{
	int i = 0;
	int n = 0;
	while(str[i])
		n = n * 10 + str[i++] - '0';
	return (n);
}

void putnum(int c)
{
	char base[10] = "0123456789";

	if (c > 9)
		putnum(c / 10);
	write(1,&base[c % 10],1);
}

int main(int argc,char **argv)
{
	if(argc == 2)
	{
		int i = 1;
		int n = mini_atoi(argv[1]);
		while(i < 9)
		{
			putnum(i);
			write(1," x ",3);
			putnum(n);
			write(1," = ",3);
			putnum(i*n);
			write(1,"\n",1);
			i++;
		}
		putnum(i);
		write(1," x ",3);
		putnum(n);
		write(1," = ",3);
		putnum(i*n);
	}
	write(1,"\n",1);
}