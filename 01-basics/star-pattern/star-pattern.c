#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	printf("您想打几行的图案：");
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= n-i;j++)
		{
			printf(" ");
		}
		for (k = 1;k <= 2 * i - 1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1;i<= n - 1;i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf(" ");
		}
		for (k = 1;k <= 2 * n - 2 * i -1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
