#include <stdio.h>
//#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int *ptr = NULL;

	printf(" pointer value:%p\n",ptr);
	ptr = (int *)malloc(0);
	if(ptr)
	{
		printf("pointer after allocation value:%p\n",ptr);
	}else
	{
		printf("memomry returned the null\n");

	}
	return 0;
}
