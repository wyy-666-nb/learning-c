#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int m = 1;
//	int q = 0;
//	printf("请输入n的值：");
//	scanf("%d", &n);
//	for (j = 1;j <= n;j++)
//	{
//		m = 1;
//		for (i = 1;i <= j;i++)
//		{
//			m *= i;
//		}
//		q += m;
//	}
//	printf("%d", q);
//
//	return 0;
//
int main()
{
	int n = 0;
	int j = 0;
	int m = 1;
	int q = 0;
	printf("请输入n的值：");
	scanf("%d", &n);
	for (j = 1;j <= n;j++)
	{
		m *= j;
		q += m;
	}
	printf("%d", q);

	return 0;

}