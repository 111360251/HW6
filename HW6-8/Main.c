#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


int main()
{
	int n, i, j, box1, box2, total[36001];
	int x[99] = { 0 };
	srand(time(NULL));
	for (i = 1; i <= 36000; i++)
	{
		box1 = rand() % 6 + 1;
		box2 = rand() % 6 + 1;
		total[i] = box1 + box2;
		for (n = 2; n <= 12; n++)
		{
			if (total[i] == n) x[n]++;
		}
	}
	for (n = 2; n <= 12; n++)
	{
		printf("�X�{%d�������`�@�� %d ��\n", n, x[n]);
		printf("\n");
	}

}