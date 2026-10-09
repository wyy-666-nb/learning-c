 /*
  * ------------------------------------------------------------
  * 语法点:函数递归01
  * 来源：鹏哥C语言2026  第74-76集
  * 日期：2026-10-09
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *  把一个大问题分解成若干个小问题，直到小问题可以直接解决
  * 【关键注意点】
  *   递归存在限制条件，当满足这个条件时递归结束
  *   每次递归调用之后越来越接近这个限制条件
  *   -
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//错误的使用递归
//int main()
//{
//    printf("hehe\n");
//    main();
//    return 0;
//}

//int Fac(int n)
//{
//	if (n > 0)
//	{
//		return n * Fac(n - 1);
//	}
//	else if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		printf("输入错误");
//		return 0;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fac(n);
//	printf("%d\n", r);
//	return 0;
//}

void Print(size_t n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%zu ", n % 10);
}

int main()
{
	size_t n = 0;
	scanf("%zu", &n);
	Print(n);
	return 0;
}
