 /*
  * ------------------------------------------------------------
  * 语法点：操作符详解02(三道练习题，逗号表达式，下标引用操作符,函数调用操作符)
  * 来源：鹏哥C语言2026  第85-89集
  * 日期：2026-10-12
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *   exp1,exp2,exp3
  *
  * 【关键注意点】
  *   异或的特点：
  *    0^a=a
  *    a^a=0
  *   异或支持交换律
  *    3^3^5=5
  *    3^5^3=5
  *  逗号表达式就是用逗号隔开的多个表达式
  *  逗号表达式从左向右依次执行，整个表达式的结果是最后一个表达式的结果
  * 【和相似语法的区别】
  *
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	// 交换两个变量的值
//	// 可能会出现溢出问题
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//不怕溢出问题
//	a = a ^ b;   //a1=a^b
//	b = a ^ b;   //b = a1^b=a^b^b=a
//	a = a ^ b;   //a = a1^b=a^b^a=b
//
//	printf("a-%d b=%d", a, b); 
//    return 0;
//}

//正数没问题 负数就不行了
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if ((num % 2) == 1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	printf("count=%d", count);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	printf("count=%d", count);
//	return 0;
//}

//
//int main()
//{
//	int a = 13;
//	a |= (1 << 4);
//	printf("%d", a);
//	a &= ~(1 << 4);
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	pritnf("%d\n", c);*/
//	int arr[10] = { 0 };
//	arr[5] = 5;//下标引用操作符
//
//	return 0;
//}
int Add(int x, int y)
{
	return x + y;
}

int main()
{
	Add(3, 5);
	printf("hehe\n");//()就是函数调用操作符
	return 0;
}
