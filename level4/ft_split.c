//1257

#include <stdlib.h>
#include <stdio.h>

int is_stn(char c)
{
	return(c == '\n' || c == ' ' || c == '\t');
}

int word_len(char *str)
{
	int i = 0;

	while(!is_stn(str[i]) && str[i] != '\0')
		++i;
	return (i);
}

int word_count(char *str)
{
	int i = 0;
	int len = 0;

	while(str[i])
	{
		if (is_stn(str[i]))
			i++;
		else
		{
			if(!is_stn(str[i]) && (is_stn(str[i + 1]) || !str[i + 1]))
			{
				len++;
				i++;
			}
			else
				i++;
		}
	}
	return (len);
}

// char *word_read(char *str)
// {
// 	int i = 0;
// 	char **tmp = malloc(sizeof(char *) * (word_count(str) + 1));
// 	int len = 0;
// 	int n = 0;

// 	while(str[i])
// 	{
// 		if (is_stn(str[i]))
// 			i++;
// 		else
// 		{
// 			if(!is_stn(str[i]) && str[i])
// 			{
// 				tmp[len][n++] = str[i++];
// 			}
// 			else
// 				i++;
// 		}
// 	}
// 	return (tmp);
// }

// char **ft_split(char *str)
// {
// 	char **ret = malloc(sizeof(char *) * (word_count(str) + 1));
// }

int main()
{
	char *str = " 1 2 333 444     555 6 77 ";
	char *str2 = " ";

	// char **ret = ft_split(str);
	// for(int i = 0;ret[i];i++)
	// 	printf("[%d] : %s\n",i,ret[i]);
	printf("%d\n",word_len(str));
	//printf("%s\n",word_read(str));


}

// int main()
// {
// 	char c = ' ';
// 	printf("%d\n",is_stn(c));
// }