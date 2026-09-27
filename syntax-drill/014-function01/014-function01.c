 /*
  * ------------------------------------------------------------
  * 语法点：函数的概念，库函数，自定义函数
  * 来源：鹏哥C语言2026  第53-55集
  * 日期：2026-09-27
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *  完成某项特定的任务的一小段代码
  *  
  * 【语法格式】
  *  ret_type fun_name(形式参数)
  *  {     
  *        函数体
  *   }
  *
  * 【关键注意点】
  *  ret_type 有返回值就要说明类型具体是什么，没有返回值就写void
  *  有参数，说明参数的个数和类型，没有参数就写void
  *  
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main(void)
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d  %d", a, b);
//    int c = a + b;//封装为一个函数
//    printf("%d\n", c);
//    return 0;
//}

//函数的定义
//int Add(int x, int y)
//{
//    return x + y;
//}
//int main(void)
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d  %d", &a, &b);
//
//    int c = Add(a, b);//函数的调用
//
//    printf("%d\n", c);
//    
//    return 0;
//}



int Add(int x, int y)//xy为形式参数
{
    return x + y;
}
int main(void)
{
    int a = 0;
    int b = 0;
    scanf("%d  %d", &a, &b);

    int c = Add(a, b);//函数的调用   ab为实际参数

    printf("%d\n", c);

    return 0;
}
