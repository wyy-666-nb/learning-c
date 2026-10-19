 /*
  * ------------------------------------------------------------
  * 语法点：指针(传值调用，传址调用)
  * 来源：鹏哥C语言2026  第108-111集
  * 日期：2026-10-19
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *
  *
  * 【关键注意点】
  *   数组名就是数组的首元素的地址，但有两个例外：
  *    1.sizeof中单独放数组名，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
  *    2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
  *   一维数组传参，形参的部分可以写成数组的形式，也可以写成指针的形式
  *
  * 【和相似语法的区别】
  *
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void Swap(int x, int y)//传值调用
//{
//    int z = x;
//    x = y;
//    y = z;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("a=%d b=%d",a,b);
//    Swap(a,b);
//    printf("a=%d b=%d",a,b);
//    return 0;
//}

//void Swap(int* p1, int* p2)//传址调用
//{
//    int tmp = *p1;
//    *p1 = *p2;
//    *p2 = tmp;
//
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("a=%d b=%d", a, b);
//    Swap(&a, &b);
//    printf("a=%d b=%d", a, b);
//    return 0;
//}


//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//数组名是数组首元素的地址
//	printf("&arr[0] = %p\n",&arr[0]);
//	printf("&arr[0]+1 = %p\n", &arr[0]+1);
//	printf("arr     = %p\n",arr);
//	printf("arr+1     = %p\n", arr+1);
//	printf("*arr    = %d\n", *arr);
//	printf("&arr    = %p\n",&arr);//取出的是数组的地址
//	printf("&arr+1    = %p\n", &arr+1);
//	printf("%zu", sizeof(arr));
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	//给数组赋值
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		*p = i + 1; 
//		p++;
//	}
//	p = arr;
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d", * (p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//给数组赋值
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	p = arr;
//	for (int i = 0;i < sz;i++)
//	{
//		//printf("%d", *(p + i));
//		//printf("%d", *(arr + i));
//		//printf("%d",arr[i]);
//		printf("%d", i[arr]);//也可以,但不推荐
//	}
//	//arr[i] == *(arr+i) ==*(p+i)
//	//i[arr]    *(i+arr)
//	//[]是操作符     3+5==5+3
//
//	return 0;
//}
//        int* arr
//void test(int arr[10])//本质上是个指针
//{
//	//不能使用参数部分，求数组的元素个数
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("2    %d\n", sz2);
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("1   %d\n",sz1);
//	test(arr);//arr就是首元素的地址==> &arr[0]
//	return 0;
//}


void test(int arr[10],int sz)//本质上是个指针
{
	int i = 0;
	for (i = 0; i < sz;i++)
	{
		printf("%d", *(arr + i));
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	printf("1   %d\n", sz1);
	test(arr,sz1);//arr就是首元素的地址==> &arr[0]
	return 0;
}