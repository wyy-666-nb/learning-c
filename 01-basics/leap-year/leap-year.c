//判断闰年小程序
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*int main()
{
	int year = 0;
	printf("请输入年份：");
	scanf("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 100 != 0)
		{
			printf("%d年是闰年\n", year);
		}
		else if (year % 400 == 0)
		{
			printf("%d年是闰年\n", year);
		}
		else
			printf("%d年不是闰年\n", year);
	}
	else
		printf("%d年不是闰年\n", year);
	return 0;
}
*/
int main()
{
	int year = 0;
	printf("请输入年份：");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d年是闰年\n", year);
	}
	else
	{
		printf("%d年不是闰年\n", year);
	}
	return 0;
}