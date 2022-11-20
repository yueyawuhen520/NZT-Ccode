#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{   
	char a;
	scanf("%c", &a);
	int i, j;
	int n = 3;
	for (i = 1; i <= 3; i++)//正打印行数
	{
		for (j = 0; j < n - i; j++)//打印空格
			printf(" ");
		for (j = 0; j < 2 * i - 1; j++)//打印星星1，3，5，7，9
			printf("%c", a);
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--)//倒着打印三角星 
	{
		for (j = 0; j < n - i; j++)
			printf(" ");
		for (j = 0; j < 2 * i - 1; j++)
			printf("%c", a);
		printf("\n");
	}
	return 0;
}