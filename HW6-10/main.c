#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findstrlen(char b[]);

int main()
{
	char a[10] = {0};
	int  i;
	printf("�п�J�A�n���r�ꤺ�e\n");
	gets(a);
	printf("\n");
	printf("�N�r��ϹL����ܬ�\n\n");
	for (i = findstrlen(a); i >= 0; --i)
	{
		printf("%2c", a[i]);
	}


	return 0;
}
int findstrlen(char b[])
{
	int x = 0;
	x = strlen(b);
	return x;
}

