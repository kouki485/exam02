#include <stdio.h>

// unsigned int	lcm(unsigned int a, unsigned int b)
// {
// 	unsigned int n;
// 	int i = 1;


// 	if (a > b)
// 	{
// 		n = a;
// 		while(n % b != 0)
// 		{
// 			n = a * i;
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		n = b;
// 		while(n % a != 0)
// 		{
// 			n = b * i;
// 			i++;
// 		}
// 	}
// 	return (n);
// }


unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if(n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}
int main()
{
	printf("%d\n",lcm(15,18));
}