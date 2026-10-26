 /*
  * ------------------------------------------------------------
  * 语法点：数组和指针笔试题解析
  * 来源：鹏哥C语言2026  第128-131集
  * 日期：2026-10-26
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *
  *
  * 【关键注意点】
  *   sizeof(数组名),这里的数组名表示整个数组，计算的是整个数组的大小
  *   &数组名，数组名表示的是整个数组，取出的是整个数组的地址
  *  
  * 【和相似语法的区别】
  *
  */

#include <stdio.h>

//int main()
//{
//    int a[] = {1,2,3,4};
//    printf("zu\n", sizeof(a));//16
//    printf("zu\n", sizeof(a + 0));//   4/8  首元素地址 
//    printf("zu\n", sizeof(*a));// a[0]  4
//    printf("zu\n", sizeof(a + 1));//   4/8
//    printf("zu\n", sizeof(a[1]));//  4
//    printf("zu\n", sizeof(&a));//  整个数组的地址  4/8
//    printf("zu\n", sizeof(*&a));//   16
//    printf("zu\n", sizeof(&a + 1));//   4/8
//    printf("zu\n", sizeof(&a[0])); //  4/8  
//    printf("zu\n", sizeof(&a[0] + 1));//   4/8
//
//    return 0;
//}


//int main()
//{
//    char arr[] = { 'a','b','c','d','e','f' };
//    printf("zu\n", sizeof(arr));//  6
//    printf("zu\n", sizeof(arr + 0));//  4/8
//    printf("zu\n", sizeof(*arr));//  1
//    printf("zu\n", sizeof(arr[1]));//  1
//    printf("zu\n", sizeof(&arr));//  4/8
//    printf("zu\n", sizeof(&arr + 1));//  16  
//    printf("zu\n", sizeof(&arr[0] + 1));// 4/8 
//
//    return 0;
//}


#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zu\n", strlen(arr));//  未知数
//	printf("%zu\n", strlen(arr + 0));//  未知数
//	//printf("%zu\n", strlen(*arr));//   程序会崩溃
//	//printf("%zu\n", strlen(arr[1]));//   程序会崩溃
//	printf("%zu\n", strlen(&arr));  //  未知数
//	printf("%zu\n", strlen(&arr + 1));//  未知数
//	printf("%zu\n", strlen(&arr[0] + 1));//  未知数
//}

//int main()
//{
//    char arr[] = {"abcdef"};
//    printf("zu\n", sizeof(arr));// 7
//    printf("zu\n", sizeof(arr + 0));// 4/8
//    printf("zu\n", sizeof(*arr));//  1
//    printf("zu\n", sizeof(arr[1]));//  1
//    printf("zu\n", sizeof(&arr));//   4/8
//    printf("zu\n", sizeof(&arr + 1));//  4/8
//    printf("zu\n", sizeof(&arr[0] + 1));  //   4/8
//    return 0;
//}

//int main()
//{
//	char arr[] = {"abcdef"};
//	printf("%zu\n", strlen(arr));//  6
//	printf("%zu\n", strlen(arr + 0));//   6
//	//printf("%zu\n", strlen(*arr));//   程序崩溃
//	//printf("%zu\n", strlen(arr[1]));//   程序崩溃
//	printf("%zu\n", strlen(&arr)); // 6 
//	printf("%zu\n", strlen(&arr + 1));//  未知数
//	printf("%zu\n", strlen(&arr[0] + 1));//  5
//}

//int main()
//{
//	char* p = { "abcdef" };
//	printf("%zu\n", sizeof(p));// 4/8   p是首元素地址
//	printf("%zu\n", sizeof(p + 1));// 4/8
//	printf("%zu\n", sizeof(*p));//  1
//	printf("%zu\n", sizeof(p[0]));//  1
//	printf("%zu\n", sizeof(&p));//  4/8
//	printf("%zu\n", sizeof(&p + 1));//   4/8
//	printf("%zu\n", sizeof(&p[0] + 1));//   4/8
//}


//int main()
//{
//	char *p = {"abcdef"};
//	printf("%zu\n", strlen(p ));//  6
//	printf("%zu\n", strlen(p + 1));//   5
//	printf("%zu\n", strlen(*p));//   崩溃
//	printf("%zu\n", strlen(p[0]));//   崩溃
//	printf("%zu\n", strlen(&p ));  //   未知
//	printf("%zu\n", strlen(&p + 1));//    未知
//	printf("%zu\n", strlen(&p[0] + 1)); //   5  
//}


int main()
{
	int a[3][4] = {0};
	printf("%zu\n",sizeof(a));// 48
	printf("%zu\n", sizeof(a[0][0]));  //4
	printf("%zu\n", sizeof(a[0]));//  16
	printf("%zu\n", sizeof(a[0] + 1));//  4/8
	printf("%zu\n", sizeof(*(a[0] + 1)));//      4
	printf("%zu\n", sizeof(a + 1));//   4/8  第二行的地址
	printf("%zu\n", sizeof(*(a + 1)));//   16
	printf("%zu\n", sizeof(&a[0] + 1));//  4/8
	printf("%zu\n", sizeof(*( & a[0] + 1))); // 16
	printf("%zu\n", sizeof(*a)); //  16
	printf("%zu\n", sizeof(a[3]));//   16，不会越界，sizeof不会真的访问，相当于a[0]
	return 0;
}