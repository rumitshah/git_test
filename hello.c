
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef struct { char *key; int val; } strtoint_t;
static strtoint_t lookup_table[] = { {"add", 1}, {"sub", 2}, {"mul", 3} };

int get_value(char *key)
{
	for (int i=0;i<3;i++)
	{
		if(!strcmp(key,lookup_table[i].key))
		{
			return lookup_table[i].val;
		}
	}
	return 0;
}

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
                        switch(get_value(argv[2]))
			{
				case 1:
                                printf("operation is %d\n",atoi(argv[3])+atoi(argv[4]));
				break;
				case 2:
                                printf("operation is %d\n",atoi(argv[3])-atoi(argv[4]));
				break;
				case 3:
                                printf("operation is %d\n",atoi(argv[3])*atoi(argv[4]));
				break;
				default:
				printf("choose correct operation\n");
				break;
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
