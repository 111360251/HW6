#include <stdio.h>
#include <stdlib.h>
int  findMax(int *a, int *b);

int main()
{
	int x, a[100] = { 0 };
	int i, j, n;
	printf("�аݧA�n��J�X�ӼƦr�O?");
	scanf_s("%d", &n);
	printf("�A�`�@�n��J %d �ӼƦr", n);
	printf("���A�n��J�Ʀr�h�֩O\n");
	for (x = 1; x <= n; x++)
	{
		scanf_s("%d", &a[x]);
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < n; j++)
		{
			if (a[j] > a[j + 1])
			{
				findMax(&a[j], &a[j + 1]);
			}

		}
	}
	printf("�̤j�ƭȬO %d ", findMax(&a[j], &a[j + 1]));
	return 0;

}
int  findMax(int *a, int *b)
{
	int temp, Max = 0;
	temp = *a;
	*a = *b;
	*b = temp;
	if (*b > Max) Max = *b;
	return Max;
}