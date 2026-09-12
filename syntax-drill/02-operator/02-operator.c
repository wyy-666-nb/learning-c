 /*
  * ------------------------------------------------------------
  * 语法点：关系，条件，逻辑操作符
  * 来源：鹏哥C语言2026  第31-33集
  * 日期：2026-09-12
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *关系操作符用于比较的表达式中的运算符
  *条件操作符用于条件判断的表达式中的运算符 exp1？exp2：exp3
  * 【语法格式】
  *a==b   a<=b   a>=b   a!=b   a<b   a>b
  *
  * 【关键注意点】
  *  关系表达式的结果是一个整数，0表示假，1表示真。
  *  技巧当一个变量和常量值比较相等的时候，把常量放在==的左边，变量放在==的右边，这样可以避免写成赋值操作符=的错误。
  *  关系操作符不易连用   
  *  逻辑操作符  &&是并且，||是或，!逻辑取反运算符
  *  短路：先对左边的表达式进行判断，如果能确定整个表达式的结果，就不再对右边的表达式进行判断。
  */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*int main()
{
    int age = 0;
    scanf("%d", &age);
    if (18 <= age && age <= 36)
    {
        printf("qing nian\n");
    }
*/
/*int main()
{
    int a = 0;
    int b = 0;
    scanf("%d  %d", &a, &b);
    int max = 0;
    max = (a > b) ? a : b;
    printf("%d", max);
    return 0;
}
*/
int main()
{
    int flag = 0;
    scanf("%d", &flag);
    if (flag)
    {
        printf("hehe\n");
    }
    //如果flag为假打印haha
    if (!flag)
    {
        printf("haha\n");
    }

    return 0;
}
   



/*        错误示范：if (num = 3) 这里是赋值操作符，应该使用关系操作符
int main()
{
    int num =0;
    scanf("%d", &num);
    if (num = 3)
    {
        printf("hehe\n");
    }
    return 0;
}
*/



   
