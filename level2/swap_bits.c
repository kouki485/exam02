#include <libc.h>

unsigned char	swap_bits(unsigned char octet)
{
	return(octet >> 4 | octet << 4);
}

void print_bits(unsigned char octet)
{
	int i = 8;

	while(i--)
	{
		if((octet >> i & 1) == 1)
			write(1,"1",1);
		else
			write(1,"0",1);
	}
}

int main()
{
	print_bits(15);
	printf("\n");
	print_bits(swap_bits(15));
}