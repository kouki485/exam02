#include <stdio.h>
char *ft_strrev(char *str)
{
	int i = 0;
	int l = 0;
	while(str[l])
		l++;
	l--;
	char tmp;
	while(i < l)
	{
		
		tmp = str[i];
		str[i] = str[l];
		str[l] = tmp;
		i++;
		l--;

	}
	return (str);
}

int main(int argc,char **argv)
{
	if(argc == 2)
		printf("%s\n",ft_strrev(argv[1]));
}