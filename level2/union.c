#include <unistd.h>

//flagを持ちascii対応
int main(int argc,char **argv)
{
	int box[200];

	if(argc == 3)
	{
		for(int i = 0;i < 190;i++)
			box[i] = 1;
		for(int pos = 1; pos <= argc - 1; pos++)
		{
			for(int n = 0;argv[pos][n];n++)
			{
				if(box[argv[pos][n]] == 1)
				{
					write(1,&argv[pos][n],1);
					box[argv[pos][n]] = 0;
				}
			}
		}
	}
	write(1,"\n",1);
}