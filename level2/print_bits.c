#include <unistd.h>

void print_bits(unsigned char octet)
{
	int n = 8;
	unsigned char bit; 

	while(n--)
	{
		bit = (octet >> n & 1) + '0';
		write(1,&bit,1);
	}
}

int main()
{
	print_bits(10);
}