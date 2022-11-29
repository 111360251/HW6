#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a;
	int *aPtr;
	a = 7;
	aPtr = &a;

	printf("the address of a is %p"
		"\nthe value of aPtr is %p", &a, aPtr);

	printf("\n\nthe address of a is %d"
		"\nthe value of aPtr is %d", a, *aPtr);

	printf("\n\nshowing that * and & are complements of "
		"each other\n&*aPtr = %p"
		"\n*aPtr = %p\n", &*aPtr, *&aPtr);


	return 0;
}