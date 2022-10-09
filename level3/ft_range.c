#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int len;
	int *box;
	int i = 0;
	if (start > end)
		len = start - end;
	else
		len = end - start;
	
	box = malloc(sizeof(int) * (len + 1));
	while(len >= 0)
	{
		box[len] = end;
		if (start > end)
			end++;
		else
			end--;
		len--;
	}
	return(box);
}

int main()
{
	int *box = ft_range(0,0);
	int i = 0;
	
	while(i < 5)
	{
		printf("%d\n",box[i++]);
	}
}