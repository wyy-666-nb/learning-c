 /*
  * ------------------------------------------------------------
  * 语法点：递归与迭代
  * 来源：鹏哥C语言2026  第77-79集
  * 日期：2026-10-10
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *  迭代通常就是循环的方式
  *
  * 【语法格式】
  *
  *
  * 【关键注意点】
  *  如果采用函数递归的方式完成代码，递归层次太深，就会浪费太多的栈帧空间，有可能引起栈溢出，导致程序崩溃。
  */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//递归写法  不适合用递推
//int Fib(int n)
//{
//    if (n <= 2)
//    {
//        return 1;
//    }
//    else
//    {
//        return Fib(n - 1) + Fib(n - 2);
//    }
//}
//
//int main(void)
//{
//    int n = 0;
//	scanf("%d", &n);
//    int r = Fib(n);
//    printf("%d", r);
//    return 0;
//}
//迭代写法 适合用递推
int Fib(int n)
{
	int a = 1;
	int b = 1;
    int c = 1;

    while (n >= 3)
    {
		c = a + b;
		a = b;
		b = c;
		n--;
    }
    return c;
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int r = Fib(n);
    printf("%d", r);
    return 0;
}