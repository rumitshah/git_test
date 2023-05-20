
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc < 4)
	{
		printf("Please enter cmd line options\n");
		printf("\"-s add/sub/mul\" to print reslt\n");
		printf("\"-i int1\" to print int\n");
		printf("\"-i int2\" to print int\n");
	}
	else
	{
		if(!strcmp("-s",argv[1]))
		{
			if(!strcmp("add",argv[2]))
			{
				printf("operation is %d\n",atoi(argv[3])+atoi(argv[4]));
			}
			if(!strcmp("sub",argv[2]))
			{
				printf("operation is %d\n",atoi(argv[3])-atoi(argv[4]));
			}
			if(!strcmp("mul",argv[2]))
			{
				printf("operation is %d\n",atoi(argv[3])*atoi(argv[4]));
			}
		}
		else
		{
			printf("format error\n");
			printf("\"-s string\" to print string\n");
			printf("\"-i int\" to print int\n");
		}
	}
	return 0;
}
