#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	printf("请输入年：");
	scanf("%d", &year);
	printf("请输入月:");
	scanf("%d", &month);
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("这个月有31天");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("这个月有30天");
		break;
	case 2:
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			printf("这个月有29天");
		}
		else
		{
			printf("这月有28天");
		}
		break;
    }
	default :
		printf("输入错误请从新输入");
		break;
    }
	return 0;
}