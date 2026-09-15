/*
  * ------------------------------------------------------------
  * 语法点：break-continue
  * 来源：鹏哥C语言2026  第39集
  * 日期：2026-09-15
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  * break 用于永久的终止循环,执行后跳出循环往后执行
  * continue 用于跳过本次循环中continue后边的代码
  * 【语法格式】
  *  break;
  * continue;
  * 【关键注意点】
 *   - break 是终止**整个循环**；continue 只是跳过**本次**循环的剩余部分
 *   - 循环里的 switch 中，break 只能跳出 switch，跳不出外层循环
 *   - 在 do-while 里用 continue 要格外小心：它会跳到 while(表达式) 去判断，
 *     如果循环变量的更新写在 continue 后面，就会变成死循环
 *   - for 循环里 continue 会跳到"表达式3"（更新），相对安全
 *
 * 【和相似语法的区别】
 *   - break：直接跳出循环，循环结束
 *   - continue：结束本次循环，进入下一次
 *   - 同样循环 i 从 1 到 10：
 *       i==5 时 break     →  输出 1 2 3 4
 *       i==5 时 continue  →  输出 1 2 3 4 6 7 8 9 10（跳过 5）
  */

#include <stdio.h>

//int main(void)
//{
//    int i = 1;
//
//    while (i <= 10)
//    {
//        if (i == 5)
//            break;
//
//        printf("%d", i);
//        i++; 
//    }
//死循环代码示例
//int main(void)
//{
//    int i = 1;
//
//    while (i <= 10)
//    {
//        if (i == 5)
//            break;
//
//        printf("%d", i);
//        i++;
//    }
//int main()
//{
//    int i = 1;
//    for (i = 1;i <= 10;i++)
//    {
//        if (i == 5)
//            break;
//
//        printf("%d ", i);
//    }
//int main()
//{
//    int i = 1;
//    for (i = 1;i <= 10;i++)
//    {
//        if (i == 5)
//            continue;
//
//        printf("%d ", i);
//    }
int main()
{
    int i = 1; 
    do
	{
		if (i == 5)
			break;
	printf("%d ", i);
	i++;
} while (i <= 10);
 
	return 0;
}
