#include <unistd.h>

void putnum(int n)
{
	char base[10] = "0123456789";

	if(9 < n)
		putnum(n / 10);
	write(1,&base[n % 10],1);
}

int main(int argc)
{
	putnum(argc - 1);
	write(1,"\n",1);
}