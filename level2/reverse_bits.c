#include <libc.h>

unsigned char reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char c;
	while(i--)
	{
		c = (c << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (c);
}

void print_bits(unsigned char octet)
{
	int i = 8;
	char bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1,&bit,1);
	}
}

int main()
{
	print_bits(12);
	printf("\n");
	print_bits(reverse_bits(12));

}