#include <libc.h>

int main(int argc,char **argv)
{
	char box[200] = {};
	if (argc == 3)
		for(int n = 1;n < argc - 1;n++)
			for(int i = 0;argv[n][i];i++)
				if(box[argv[n][i]] == 0)
				{
					write(1,&argv[n][i],1); 
					box[argv[n][i]] = 1;
				}
	write(1,"\n",1);
}
