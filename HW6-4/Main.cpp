#include <stdio.h>
#include <stdlib.h>

void  c(int &nPtr);

int main(void)
{
	int n = 5;
	printf("the original value of number is %d", n);

	c(n);
	printf("\nthe new value of number is %d\n", n);

	return 0;
}
void c(int &nPtr)
{
	nPtr = nPtr * nPtr * nPtr;
}