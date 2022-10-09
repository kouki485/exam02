#include <unistd.h>

void	str_capitalizer(char *str)
{

	if ('a' <= str[0] && str[0] <='z')
			str[0] -= 32;
	write(1,&str[0],1);
	for (int i = 1;str[i];i++)
	{
		if ('A' <= str[i] && str[i] <='Z')
			str[i] += 32;
		if (('a' <= str[i] && str[i] <='z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write(1,&str[i],1);
	}
}

int main(int argc,char **argv)
{
	if (argc == 1)
		write(1,"\n",1);
	else
	{
		for (int i = 1;i < argc;i++)
		{
			str_capitalizer(argv[i]);
			write(1,"\n",1);
		}
	}
}