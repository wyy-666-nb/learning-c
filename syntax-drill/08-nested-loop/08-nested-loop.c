 /*
  * ------------------------------------------------------------
  * 语法点：循环的嵌套
  * 来源：鹏哥C语言2026  第40集
  * 日期：2026-09-15
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *
  *
  * 【关键注意点】
  *   -
  *   -
  *
  * 【和相似语法的区别】
  *
  */

#include <stdio.h>
#include <math.h>
//都属于试除法

//int main(void)
//{
//    int i = 0;
//    for(i = 100;i <= 200;i++)
//    {
//        int flag = 1;
//        int j = 0;
//        for (j = 2;j <= i - 1;j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//            printf("%d  ", i);
//    }
// 
//
//    return 0;
//}
// 第一遍优化
//int main(void)
//{
//    int i = 0;
//    for (i = 101;i <= 200;i+=2)
//    {
//        int flag = 1;
//        int j = 0;
//        for (j = 2;j <= i - 1;j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//            printf("%d  ", i);
//    }
//
//
//    return 0;
//}
int main(void)
{
    int i = 0;
    for (i = 101;i <= 200;i += 2)
    {
        int flag = 1;
        int j = 0;
        for (j = 2;j <=sqrt(i);j++)//sprt 是计算平方根的
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d  ", i);
    }


    return 0;
}