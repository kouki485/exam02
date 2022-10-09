#include <unistd.h>
#include <stdlib.h>

int ft_min_atoi(char *str)
{
	int i = 0;
	int n;
	while(str[i])
	{
		n =  n * 10 + str[i] - '0';
		i++;
	}
	return (n);
}

void change_hex(int n)
{
	char base[17] = "0123456789abcdef";

	if (n > 16)
		change_hex(n / 16);
	write(1,&base[n % 16],1);
}
int main(int argc,char **argv)
{
	if (argc == 2)
		change_hex(ft_min_atoi(argv[1]));
	write(1,"\n",1);
}