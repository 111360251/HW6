#include <stdio.h>
#include <stdlib.h>
#define SIZE 10 


int main()
{
	int b[] = { 10, 20, 30, 40 };
	int *bp = b;
	int i;
	int offset;

	printf("array b printed with:\narray subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("b[%d] = %d\n", i, b[i]);
	}

	printf("\npointer/offset notation where\n"
		"the pointer is the array name\n");
	for (offset = 0; offset < 4; offset++)
	{
		printf("*(b + %d) = %d\n", offset, *(b + offset));
	}
	printf("\npointer subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("bPtr[%d] = %d\n", i, bp[i]);
	}
	printf("\npointer subscript notation\n");
	for (offset = 0; offset < 4; offset++)
	{
		printf("*(bPtr + %d) = %d\n", offset, *(bp + offset));
	}
}