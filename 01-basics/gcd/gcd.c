#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入两个数：");
	scanf("%d  %d", &a, &b);
	while (b!=0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("最大公约数是%d", a);
	return 0;
}