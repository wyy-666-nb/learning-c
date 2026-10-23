 /*
  * ------------------------------------------------------------
  * 语法点：指针（回调函数，qsort函数）
  * 来源：鹏哥C语言2026  第123-125集
  * 日期：2026-10-23
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *  
  *
  * 【关键注意点】
  *  把函数的指针作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，被调用的函数就是回调函数
  *   qsort是一个库函数，是用来对数据进行排序的
  *   字符串比较大小使用strcmp*()
  * 【和相似语法的区别】
  *
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("------------------------------\n");
//	printf("-------1.add       2.sub------\n");
//	printf("-------3.mul       4.div------\n");
//	printf("-------0.exit           ------\n");
//	printf("------------------------------\n");
//}
//void calc(int(*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	printf("请输入两个操作数");
//	scanf("%d %d", &x, &y);
//	r =pf(x,y);
//	printf("%d\n", r);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请输入0到4的值\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int cmp_int(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//		return 1;
//	else if (*(int*)p1 == *(int*)p2)
//		return 0;
//	else
//		return -1;
//}

int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);	
}
void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d",arr[i]);
	}
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* p1,const void* p2)
{
	/*return ((*(struct Stu*)p1).age-(*(struct Stu*)p2).age);*/
	return (((struct Stu*)p1)->age - ((struct Stu*)p2)->age);
}

int cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name , ((struct Stu*)p2)->name);
}
void test2()
{
	struct Stu arr[] = { {"zhangsan",18},{"lisi",25},{"wangwu",15}};
	int sz = sizeof(arr) / sizeof(arr[0]);

	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}
void test3()
{
	struct Stu s = { "zhangsan",28 };
	printf("%s %d\n",s.name ,s.age );
	struct Stu* ps = &s;
	printf("%s %d\n", (*ps).name, (*ps).age);
	printf("%s %d\n", ps->name, ps->age);
}

//结构体成员访问
//1.结构体变量.成员名
//2.结构体指针->成员名

int main()
{
	//test1();//测试qsort排序整型数据
	//test2();//测试qsort排序结构体数据
	test3();
	return 0;
}