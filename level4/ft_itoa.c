//1619 -1638
#include <stdlib.h>
#include <stdio.h>

int num_len(int n)
{
	int len = 0;
	if (n <= 0)
		len++;
	while(n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long lnum = nbr;
	int len = num_len(lnum);
	if(lnum == -2147483648)
		return ("-2147483648");
	char *str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (lnum == 0)
		str[0] = '0';
	else if (lnum < 0)
	{
		lnum = -lnum;
		str[0] = '-';
	}
	while(lnum)
	{
		str[--len] = lnum % 10 + '0';
		lnum /= 10;
	}
	return (str);
}

// int main(int argc,char **argv)
// {
// 	if(argc == 2)
// 	{
// 		char *str = ft_itoa(atoi(argv[1]));
// 		//printf("len : %d\n",num_len(atoi(argv[1])));
// 		printf("%s\n",str);
// 		free(str);
// 	}
// }