// #include <unistd.h>

// int main(int argc,char **argv)
// {
// 	int i,n;
// 	if (argc == 3)
// 	{
// 		for(i = 0;argv[1][i];i++)
// 		{
// 			for(n = 0;argv[2][n];n++)
// 			{
// 				if(argv[1][i] != argv[2][n])
// 				{
// 					n++;
// 					//write(1,&argv[2][n],1);
// 					//continue;
// 				}
// 			}
// 			//write(1,&argv[2][n],1);
// 			write(1,&argv[1][i],1);
// 		}
// 	}
// 	write(1,"\n",1);
// }