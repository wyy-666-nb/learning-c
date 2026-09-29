 /*
  * ------------------------------------------------------------
  * 语法点：嵌套调用 链式访问  单多文件中函数的声明和定义
  * 来源：鹏哥C语言2026  第59-61集
  * 日期：2026-09-29
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *  嵌套调用可以在函数中使用函数
  *  链式访问将一个函数的返回值作为另一个函数的参数
  * 【关键注意点】
  *  函数在设计时功能尽量单一
  *  函数定义要在函数调用的前面
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
////函数定义
//bool is_leap_years(int y)
//{
//    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//        return true;
//    else
//        return false;
//    
//}
////函数定义
//int get_days_of_month(int y,int m)
//{
//    int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int d = days[m];
//    if (is_leap_years(y) && m == 2)
//    {
//        d++;
//    }
//    return d;
//}
//int main()
//{
//    int year = 0;
//    int month = 0;
//    scanf("%d%d", &year, &month);
//    int day = get_days_of_month(year, month);//函数调用
//    printf("%d", day);
//    
//    return 0;
//}

//int main()
//{
//	printf("%zu", strlen("abcdef"));
//	return 0;
//}


////错误示范 
//int main()
//{
//    int year = 0;
//    int month = 0;
//    scanf("%d%d", &year, &month);
//    int day = get_days_of_month(year, month);//函数调用
//    printf("%d", day);
//
//    return 0;
//}
////函数定义
//bool is_leap_years(int y)
//{
//    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//        return true;
//    else
//        return false;
//
//}
////函数定义
//int get_days_of_month(int y, int m)
//{
//    int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int d = days[m];
//    if (is_leap_years(y) && m == 2)
//    {
//        d++;
//    }
//    return d;
//}

////函数的声明
//bool is_leap_years(int y);
//int get_days_of_month(int y, int m);
//
//int main()
//{
//    int year = 0;
//    int month = 0;
//    scanf("%d%d", &year, &month);
//    int day = get_days_of_month(year, month);//函数调用
//    printf("%d", day);
//    return 0;
//}
////函数定义
//bool is_leap_years(int y)
//{
//    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//        return true;
//    else
//        return false;
//}
////函数定义
//int get_days_of_month(int y, int m)
//{
//    int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int d = days[m];
//    if (is_leap_years(y) && m == 2)
//    {
//        d++;
//    }
//    return d;
//}
//""包含的是自己创建的头文件
#include "Add.h"
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = Add(a, b);
	printf("%d", c);
	return 0;
}

