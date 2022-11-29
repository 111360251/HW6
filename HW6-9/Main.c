#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Findnum(int* arr, int key, int sz);
void swap(int *a, int *b);
int main()
{
	int a[100] = { 0 };
	int x, y, z, n = 0, g, i, j;

	srand(time(NULL));
	printf("�п�J�A�n��J�X�ӼƦr:");
	scanf_s("%d", &x);
	printf("\n");
	printf("�o�ǼƦr���O�O�h��");
	for (g = 1; g <= x; g++)
	{
		scanf_s("%d", &a[g]);
	}
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j < x; j++)
		{
			if (a[j] > a[j + 1]) swap(&a[j], &a[j + 1]);
		}
	}
	printf("�üƩҲ��ͪ��Ʀr��(�H�ƧǦn)�H�U\n");
	for (j = 1; j <= x; j++) printf("%3d", a[j]);
	printf("\n");
	printf("�п�J�A�n�ϥ�(�G���d��k)�ҭn�d�䪺�Ʀr:");
	scanf_s("%d", &z);
	Findnum(a, z, x);

}
void Findnum(int* arr, int key, int sz)

{//�G���d��
	int  left = 0;//����
	int right = sz - 1;//�k��
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (arr[mid] > key)
		{//����key�barr[mid]�Mleft����
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			printf("����A�A�������U�Ь�:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�䤣��\n");
	}
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
