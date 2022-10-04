#include <libc.h>

unsigned char reverse_bits(unsigned char b)
{
	unsigned char	r = 0;
	unsigned		byte_len = 8;

	while (byte_len--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1,&bit,1);
	}
}

// void print_bits2(unsigned char octet)
// {
// 	int i = -1;
// 	unsigned char bit;

// 	while(i++ < 7)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1,&bit,1);
// 	}
// }

int main()
{
	print_bits(39);
	printf("\n");
	print_bits(reverse_bits(39));
	//reverse_bits(10);
}