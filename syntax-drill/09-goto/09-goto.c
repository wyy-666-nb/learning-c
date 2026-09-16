 /*
  * ------------------------------------------------------------
  * 语法点：goto 语句
  * 来源：鹏哥C语言2026  第41集
  * 日期：2026-09-16
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *   goto语句可以实现在同一个函数内跳转到设置好的标号处
  *
  * 【语法格式】
  *  goto 标号;
  *  标号：
  * 【关键注意点】
  *   goto语句使用不当容易打乱程序的执行流程，尽量不使用goto
  *  
  *
  * 【和相似语法的区别】
  *  一个break只能跳出一层for循环，多层嵌套时goto更加迅速
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(void)
//{
//    printf("hehe\n");
//    goto next;
//    printf("haha\n");
//    next:
//    printf("heihei\n");
//    }

//int main(void)
//{
//again:
//    printf("hehe\n");
//    printf("haha\n");
//    goto again;
//关机程序system函数是用来执行系统命令的
int main ()
{
    //字符数组
    char input [20] = {0};
    system("shutdown -s -t 60");
 again:
    printf("请输入‘我是猪’不然电脑将在60秒内关机");
    scanf("%s", input);
    //两个字符串比较相等使用strcmp
    if(strcmp(input,"我是猪") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}
