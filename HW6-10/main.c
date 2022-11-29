#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findstrlen(char b[]);

int main()
{
	char a[10] = {0};
	int  i;
	printf("請輸入你要的字串內容\n");
	gets(a);
	printf("\n");
	printf("將字串反過來顯示為\n\n");
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

