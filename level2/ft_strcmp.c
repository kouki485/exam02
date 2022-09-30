#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1,char *s2)
{
	int i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main(void)
{
	char str1[] = "abc";
	char str2[]= "adpf";

		printf("strcmp(%s, %s) = %d\n", str1, str2, strcmp(str1, str2));
		printf("ft_strcmp(%s, %s) = %d\n", str1, str2, ft_strcmp(str1, str2));

}
