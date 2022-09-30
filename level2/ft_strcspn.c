#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int n;

	for(i = 0;s[i];i++)
		for(n = 0;reject[n];n++)
			if(s[i] == reject[n])
				return (i);
	return (i);

}

int main(int argc, char **argv)
{
	char str[] = "abcdfgi";
	int len,len2;


	len = strcspn(str, argv[1]);
	len2 = ft_strcspn(str, argv[1]);
	printf("本家 :%sに%sが含まれない長さは%dです。\n", str,argv[1], len);
	printf("42  :%sに%sが含まれない長さは%dです。\n", str,argv[1], len2);
}