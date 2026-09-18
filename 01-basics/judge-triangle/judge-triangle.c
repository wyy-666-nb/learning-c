#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入三角形的三边：");
	scanf("%d %d %d", &a, &b, &c);
	if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || a + c <= b)
	{
		printf("输入错误，请重新输入");
	}
	else if (a == b || b == c || c == a)
	{
		if (a == b&&b == c)
			printf("等边三角形");
		else
			printf("等腰三角形");
	}
	else if (a * a + b * b == c * c||a * a + c* c == b * b ||b * b +c * c == a * a)
	{
		printf("直角三角形");
	}
	else
		printf("普通三角形");
	return 0;

}