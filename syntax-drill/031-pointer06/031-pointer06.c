 /*
  * ------------------------------------------------------------
  * 语法点：指针（数组指针变量，函数指针变量，typedef关键字）
  * 来源：鹏哥C语言2026  第116-120集
  * 日期：2026-10-21
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *
  *
  * 【关键注意点】
  *   二维数组数组名也是数组首元素的地址，也就是第一个一维数组的地址
  *   函数名就是函数的地址,&函数名还是函数的地址
  *
  * 【和相似语法的区别】
  *  指针数组是指针组成的数组，如：int* arr[5]
  *  数组指针是指向数组的指针，如：int(*p)[5]
  */

#include <stdio.h>

//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int(*p)[10] = &arr;//p就是数组指针变量
//
//    char ch[5] = { 'a','b' };
//    char(*p2)[5] = &ch;
//    return 0;  
//}


//void print(int arr[3][5],int r,int c)
//{
//	int i = 0;
//	for (i = 0;i < r;i++)
//	{
//		int j = 0;
//		for (j = 0;j < c;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//void print(int (*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0;i < r;i++)
//	{
//		int j = 0;
//		for (j = 0;j < c;j++)
//		{
//			printf("%d ", arr[i][j]);
//			//arr[i][j] = *(*(arr+i)+j)
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5,}, { 2,3,4,5,6 }, { 3,4,5,6,7 } };
//	print(arr, 3, 5);
//	//arr是数组名，数组名是数组首元素的地址
//	//首元素是arr的第一行这个一维数组的地址
//
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	//printf("%p\n", test);
//	//printf("%p\n", &test);
//	void (*pf)() = test;
//	//pf就是函数指针
//	return 0;
//}


//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//    int (* pf)(int x,int y) = Add;
//	//int r = (*pf)(3, 5);
//	int r = pf(3, 5);
//	//int r = Add (3 , 5);
//	printf("%d",r);
//	return 0;
//}

//typedef unsigned int unit;
//int main()
//{
//	unsigned int num = 0;
//	unit num2 = 0;
//
//	return 0;
//}

//typedef int* pint_t;
//int main()
//{
//	//int* p1,p2;
//	//p1是指针变量
//	//p2是整型
//	int* p1, * p2;
//	//p1是指针变量
//	//p2是指针变量
//
//	pint_t p1, p2;
//	//p1，p2都是指针变量
//	return 0;
//}


//typedef int (*parr_t)[5];//重命名类型要放在这个里面
//
//int main()
//{
//	int arr[5] = { 0 };
//	int (*pa)[5] = &arr;
//	parr_t pb = &arr;
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
typedef int (*pf_t)(int, int);
int main()
{
	int (*pf1)(int, int) = Add;
	pf_t pf2 = Add;
	return 0;
}