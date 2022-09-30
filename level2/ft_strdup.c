#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int i = 0;
	while(src[i])
		i++;
	char *buf = malloc(i + 1);
	int n = 0;
	while(i--)
	{
		buf[n] = src[n];
		n++;
	}
	buf[n] = '\0';
	return (buf);
}

int main()
{
	char *s = "abcdef";
	char *d = ft_strdup(s);

	printf("%s\n",d);
	free(d);
}