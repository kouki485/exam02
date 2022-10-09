#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start,int end)
{
	int len;
	int *box;

	if (start > end)
		len = start - end;
	else
		len = end - start;
	box = malloc(sizeof(int) * (len + 1));

	while(len >= 0)
	{
		box[len] = start;
		if (start > end)
			start--;
		else
			start++;
		len--;
	}
	return (box);
}
