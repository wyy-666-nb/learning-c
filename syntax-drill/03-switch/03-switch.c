 /*
  * ------------------------------------------------------------
  * 语法点：switch
  * 来源：鹏哥C语言2026  第 34 集
  * 日期：2026-09-13
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *用于判断条件有多个结果的情况，避免使用多个 if else 语句。
  *
  * 【语法格式】
  *switch (整型表达式)
    {
    case 常量1:
        语句;
        break;
    case 常量2:
        语句;
        break;
    default:
        语句;
        break;
    }
  *
  * 【关键注意点】
  * switch 语句中，括号中的表达式结果必须是整型。
  * case 和后面的数字之间必须有空格  case语句执行完需加上break，才可以跳出switch语句
  * case后面必须是整型常量表达式
  * 【和相似语法的区别】
  *if else 语句可以判断任意条件，switch 语句只能判断整型条件。
  */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*int main()
{
    int num = 0;
    scanf("%d", &num);

    switch (num % 3)
    {
    case 0:
        printf("余数是0\n");
        break;
    case 1:
        printf("余数是1\n");
        break;
    case 2:
        printf("余数是2\n");
        break;
    }

*/
/*
int main()
{
    int num = 0;
    scanf("%d", &num);
    switch(num)
    {
        case 1:
            printf("xing-qi-yi\n");
            break;
        case 2:
            printf("xing-qi-er\n");
            break;
		case 3:
            printf("xing-qi-san\n");
            break;
		case 4:
            printf("xing-qi-si\n");
            break;  
		case 5:
			printf("xing-qi-wu\n");
			break;
		case 6:
			printf("xing-qi-liu\n");
			break;
        case 7:
			printf("xing-qi-ri\n");
			break;
        default:
			printf("error\n");
			break;
    }
    */
int main()
{
    int num = 0;
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("work day\n");
        break;
    case 6:
    case 7:
        printf("xiu-xi-ri\n");
        break;
    default:
        printf("error\n");
        break;
    }
    return 0;
}
