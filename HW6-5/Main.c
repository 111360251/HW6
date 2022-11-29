#include <stdio.h>
#include <stdlib.h>
#define SIZE 10 

void b(int * const array, const int size);

int main()
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int i;

	printf("data items in original order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	b(a, SIZE);

	printf("\ndata items in ascending order\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	return 0;
}

void b(int * const array, const int size)
{
	void swap(int *ep1, int *ep2);
	int pass;
	int j;

	for (pass = 0; pass < size - 1; pass++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

void swap(int *ep1, int *ep2)
{
	int hold = *ep1;
	*ep1 = *ep2;
	*ep2 = hold;
}