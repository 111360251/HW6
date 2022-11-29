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
	printf("請輸入你要輸入幾個數字:");
	scanf_s("%d", &x);
	printf("\n");
	printf("這些數字分別是多少");
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
	printf("亂數所產生的數字為(以排序好)以下\n");
	for (j = 1; j <= x; j++) printf("%3d", a[j]);
	printf("\n");
	printf("請輸入你要使用(二分查找法)所要查找的數字:");
	scanf_s("%d", &z);
	Findnum(a, z, x);

}
void Findnum(int* arr, int key, int sz)

{//二分查找
	int  left = 0;//左邊
	int right = sz - 1;//右邊
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (arr[mid] > key)
		{//說明key在arr[mid]和left之間
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到瞭，對應的下標為:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
