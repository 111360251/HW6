#include <stdio.h>
#include <stdlib.h>
int c(int n);

int main()
{
	int n = 5;
	printf("the original value of number is %d", n);

	n = c(n);
	printf("\nthe new value of number is %d\n", n);

	return 0;
}
int c(int n)
{
	return n * n * n;
}