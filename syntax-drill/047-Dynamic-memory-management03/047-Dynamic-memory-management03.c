
 /*
  * ------------------------------------------------------------
  * 语法点：动态内存管理03
  * 来源：鹏哥C语言2026  第170-171集
  * 日期：2026-11-05
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *
  *
  * 【关键注意点】
  *   结构中的柔性数组成员前面必须至少一个其他成员
  *   sizeof返回的这种结构大小不包括柔性数组
  *   包含柔性数组成员的结构用malloc（）函数进行内存的动态分配
  *
  * 【和相似语法的区别】
  *
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct st_type
//{
//    int i;
//    int a[0];//柔性数组成员
//};
//
//int main()
//{
//    printf("%zu\n",sizeof(struct st_type));//4
//    return 0;
//}

//struct S
//{
//	int n;
//	int arr[];//柔性数组成员,希望arr开始的时候能存放5个整型，后期arr的空间大小可以调整
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//	ps->n  = 100;
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//	//扩容
//	struct S* ptr = realloc(ps, sizeof(struct S) + 10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("realloc");
//	}
//	else
//	{
//		ps = ptr;
//		ptr = NULL;
//		for (i = 5;i < 10;i++)
//		{
//			ps->arr[i] = i + 1;
//		}
//	}
//	//释放
//	free(ps);
//	return 0;
//}


//struct S
//{
//	int n;
//	int arr[];//柔性数组成员,希望arr开始的时候能存放5个整型，后期arr的空间大小可以调整
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//	ps->n = 100;
//	int* ptr = (int*)malloc(5* sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	else
//	{
//		perror("use malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//	//扩容
//	struct S* ptr = realloc(ps, sizeof(struct S) + 10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("realloc");
//	}
//	else
//	{
//		ps = ptr;
//		ptr = NULL;
//		for (i = 5;i < 10;i++)
//		{
//			ps->arr[i] = i + 1;
//		}
//	}
//	//释放
//	free(ps);
//	return 0;
//}



int main()
{

	return 0;
}