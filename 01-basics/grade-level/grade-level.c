#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int grade = 0;
	printf("请输入成绩：");
	scanf("%d", &grade);
	if (grade < 0 || grade > 100)
	{
		printf("输入错误，请重新输入");
	}
	else if (grade >= 90)
	{
		printf("A");
	}
	else if (grade >= 75)
	{
		printf("B");
	}else if(grade >= 60)
	{
		printf("C");
	}
	else 
	{
		printf("D");
	}
	return 0;
}