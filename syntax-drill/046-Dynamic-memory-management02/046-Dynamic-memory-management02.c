 /*
  * ------------------------------------------------------------
  * 语法点：动态内存
  * 来源：鹏哥C语言2026  第169集
  * 日期：2026-11-04
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *
  *
  * 【关键注意点】
  *   
  *   -
  *
  * 【和相似语法的区别】
  *
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void test()
//{
//    int* p = (int*)malloc(INT_MAX / 4);
//    *p = 20;//如果p的值是NULL，就会有问题
//    free(p);
//    p = NULL;
//}
//
//void test()
//{
//    int i = 0;
//    int* p = (int*)malloc(10 * sizeof(int));
//    if (NULL == p)
//    {
//        return 0;
//    }
//    for (i = 0;i <= 10;i++)
//    {
//        *(p + i) = i;//当i是10的时候越界访问
//    }
//    free(p);
//    p = NULL;
//}
//void test()
//{
//    int a = 10;
//    int* p = &a;
//    free(p);
//    p = NULL;//不可以释放栈区的空间
//}
//
//void test()
//{
//    int* p = (int*)calloc(5, sizeof(int));
//    p++;
//    free(p);//p不再指向动态内存的起始位置
//}

//void test()
//{
//    int* p = (int*)malloc(100);
//    free(p);
//    free(p);//重复释放
//}

//void test()
//{
//    int* p = (int*)malloc(100);
//    if (NULL != p)
//    {
//        *p = 20;
//    }
//}
//
//int main(void)
//{
//    test();
//    //忘记释放动态内存空间，内存泄漏
//    while (1);
//    return 0;
//}
#include <string.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


void GetMemory(char** p)
{
	*p = (char*)malloc(100);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}