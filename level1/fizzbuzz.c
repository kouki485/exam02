#include <unistd.h>
#include <stdio.h>

void putnum(int c)
{
	char num[10] = "0123456789";

	if (c > 9)
		putnum(c / 10);
	write(1,&num[c % 10],1);
}

int main()
{
	for(int i = 1; i <= 100; i++)
	{
		if(i % 15 == 0)
			write(1,"fizzbuzz",8);
		else if(i % 3 == 0)
			write(1,"fizz",4);
		else if(i % 5 == 0)
			write(1,"buzz",4);
		else
			putnum(i);
		write(1,"\n",2);
	}
}