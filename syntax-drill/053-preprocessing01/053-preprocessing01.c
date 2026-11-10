 /*
  * ------------------------------------------------------------
  * 语法点：预处理01
  * 来源：鹏哥C语言2026  第187-集
  * 日期：2026-11-10
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *  #define name stuff
  *  #defien name(parament-list) stuff   //定义宏
  * 【关键注意点】
  *   宏参数和#define定义中可以出现其他#define定义的符号，但是对于宏，不能出现递归
  *   当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索
  *
  * 【和相似语法的区别】
  *
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	return 0;
//}

//#define reg register
//#define do_forever for(;;)
//int main()
//{
//	register int num;//建议num放在寄存器中
//	reg int num;
//	do_forever;
//	return 0;
//}
//#define DEBUG_PRINT printf("file:%s\n\t linr:%d\t date:%s\t time:&s\n",\
//__FILE__,\
//__LINE__,\
//__DATE__,\
//__TIME__)//  \是续行符


//#define SQUARE(x) (x)*(x)
//int main()
//{
//	int a = 10;
//	int r = SQUARE(a + 2);
//	printf("%d\n", r);
//	return 0;
//}

//
//#define DOUBLE(x) ((x)*(x))//不要吝啬括号，可以避免问题出现
//int main()
//{
//	int a = 5;
//	int r = 3 * DOUBLE(a);
//	printf("%d\n", r);
//	return 0;
//}

//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
////注意：参数不要在宏里传 i++ 这类有副作用的表达式
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = MAX(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num * sizeof(type))
//int main()
//{
//	int* p = MALLOC(10, int);
//	return 0;
//}

//#define PRINT(val,format) printf("the value of "#val" is"format"\n",val)
//int main()
//{
//	int a = 10;
//	PRINT(a, "%d");
//	float f = 3.5f;
//	PRINT(f, "%.2f");
//	return 0;
//}
#define GENERIC_MAX(type) type max_##type(type x,type y)\
                          {\
								return x>y?x:y;\
                          }

GENERIC_MAX(char)
GENERIC_MAX(int)
GENERIC_MAX(float)

int main()
{
	int a = 10;
	int b = 20;
	int m = MAX_int(a, b);
	printf("%d\n", m);
	return 0;
}