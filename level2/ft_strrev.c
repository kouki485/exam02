#include <libc.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

void swap(char *s1,char *s2)
{
	char tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

char *ft_strrev(char *str)
{
	int i = ft_strlen(str) - 1;
	if (str[0] == '\0')
		return ("");

	for (int n = 0;n < i / 2;++n)
		swap(str + n,str + i - n);
	return(str);

}

int main(int argc,char **argv)
{
	if(argc == 2)
		printf("%s\n",ft_strrev(argv[1]));
}