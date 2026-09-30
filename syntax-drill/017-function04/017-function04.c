 /*
  * ------------------------------------------------------------
  * 语法点：static extern
  * 来源：鹏哥C语言2026  第62-63集
  * 日期：2026-9-30
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *  static  用来修饰局部变量，修饰全局变量，修饰函数
  *  extern 用来声明外部符号
  * 【语法格式】
  *  static 类型 变量名
  *  extern 类型 变量名
  * 【关键注意点】
  *   static修饰局部变量改变了变量的生命周期，本质是改变了变量的存储类型，局部变量本来应存在于内存的栈区，被修饰后储存在静态区
  *   但static不改变作用域
  *   函数和全局变量默认有外部链接属性，被static修饰之后外部链接属性就变为了内部链接属性，就只能在本源文件中使用，不能在其他源文件中使用
 
  */

#include <stdio.h>

//int main()
//{
//    {
//        int a = 100;//局部变量
//        printf("%d", a);
//    }
//    printf("%d", a);
//    return 0;
//}
//int a = 100;//全局变量
//
//int main()
//{
//    {
//        
//        printf("1.%d", a);
//    }
//    printf("2.%d", a);
//    return 0;
//}
//extern 用来声明外部符号的
//extern int a;
//
//int main()
//{
//    {
//        
//        printf("1.%d", a);
//    }
//    printf("2.%d", a);
//    return 0;
//}
 /*void test()
{
	int n = 10;
	n++;
	printf("%d ", n);
}
int main()
{
	int i = 0;
	for (i = 0;i < 5;i++)
	{
		test();
	}
	return 0;
}*/

//void test()
//{
//	static	int n = 10;//static修饰局部变量
//	n++;
//	printf("%d ", n);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		test();
//	}
//	return 0;
//
//}


//extern int g_val;//声明外部符号
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
 // 【故意报错示范】static 修饰函数后变成内部链接
// 在 017.c 中：static int Add(int x, int y) { ... }
// → 本文件用 extern 也链接不到 → LNK2019: 无法解析的外部符号 Add
//声明外部的函数
extern int Add(int x, int y);
int main()
{
	int c = Add(20, 100);
	printf("%d", c);
	return 0;
}