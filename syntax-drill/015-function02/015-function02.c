 /*
  * ------------------------------------------------------------
  * 语法点：return语句，数组做函数参数
  * 来源：鹏哥C语言2026  第57-58集
  * 日期：2026-09-28
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *  可以从函数中直接返回用return;
  * 【语法格式】
  *  return(数值表达式真假空的都可以);
  * 【关键注意点】
  *  函数返回类型与return返回的值类型不一致，则直接转换为函数的返回类型
  *  返回类型不写则编译器默认为int
  *  形参和实参个数要匹配，形参部分的数组大小可以不写
  *  二维数组传参行可以省略，列不可以
  *  
  *   数组传参，形参是不会创建新的数组的
  *   形参操作的数组和实参的数组是同一个数组
  * 
  * 【和相似语法的区别】
  *  break是跳出循环，return可以跳出函数
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int is_leap_year(int y)
//{
//    if (((y % 4 == 0) && (y % 100 != 0))|| (y % 400 == 0))
//        return 1;
//    else
//        return 0;
//}
//int main(void)
//{
//    int year = 0;
//    scanf("%d", &year);
//    if (is_leap_year == 1)
//        printf("闰年");
//    else
//        printf("不是闰年\n");
//    return 0;
//}
//void set_arr(int arr2[10],int sz2)
//{
//	int i = 0;
//	for(i = 0;i < sz2 ; i++)
//	{
//		arr2[i] = - 1;
//	}
//}
//void printf_arr(int arr2[10],int sz2)
//{
//	int j = 0;
//	for (j = 0;j < sz2; j++)
//	{
//		printf("%d  ", arr2[j]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr,sz);
//	printf_arr(arr, sz);
//	return 0;
//}

void set_arr2(int arr[3][5], int a, int b)
{
	int i = 0;
	for (i = 0;i < a;i++)
	{
		int j = 0;
		for (j = 0;j < b;j++)
		{
			arr[i][j] = i + j;
		}
	}
}

void printf_arr2(int arr[3][5], int a, int b)
{
	int i = 0;
	for (i = 0;i < a;i++)
	{
		int j = 0;
		for (j = 0;j < b;j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{
	int arr[3][5] = { 0 };
	set_arr2(arr,3,5);
	printf_arr2(arr,3,5);
	return 0;
}
