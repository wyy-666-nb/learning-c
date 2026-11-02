 /*
  * ------------------------------------------------------------
  * 语法点：结构体
  * 来源：鹏哥C语言2026  第155-161集
  * 日期：2026-11-02
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *  
  *
  * 【关键注意点】
  *   struct 结构体名
  *   {
  *      member-list;  
  *   }variable-list;
  *   例
  *   struct Stu
  *   {
  *        char name[20];  //名字
  *        int age;  //年龄
  *        char sex[5];  //性别
  *        char id[20];  //学号
  *   };//分号不能丢
  * 
  * 
  *   对齐规则
  *  1.结构体的第一个成员对齐到和结构体变量起始位置偏移量为0的地址处
  *  2.从第二个成员变量开始，都要对齐到某个对齐数的整数倍的地址处
  *    对齐数=编译器默认的对齐数和成员变量自身大小的最小值
  *  3.结构体的总大小要对齐到最大对齐数的整数倍
  *  4。如果嵌套了结构体的情况，嵌套的结构体成员对齐到自己的成员中最大对齐数的整数倍，结构体的整体大小就是所有最大对齐数（含嵌套结构体中成员的对齐数）的整数倍
  *  设计结构体的时候尽量让占用空间小的成员在一起
  *   #pragma可以修改默认对齐数
  *   结构体传参尽量传结构体的地址
  *   位段跨平台会有很多问题，尽量不要使用位段或者对于不同平台进行优化
  *   位段成员可能共用一个字节，内存中每个字节分配一个地址，一个字节内部的bit位是没有地址的，不能对位段的成员使用&操作符
  *
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct Stu
//{
//    char name[20];  //名字
//    int age;  //年龄
//    char sex[5];  //性别
//    char id[20];  //学号
//}s3, s4;//全局变量
//struct Stu s2;//全局变量
//int main()
//{
//    struct Stu s1;//局部变量
//    return 0;
//}

//匿名结构体类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;//只能用这个变量x，不能再定义其他变量
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}*p = &x;//非法 操作，这两结构体类型不一样，不能用指针指向
//int main()
//{
//	
//	return 0;
//}

//typedef struct
//{
//	int a;
//	char b;
//	float c;
//}S;//重名了就可以多次使用
//int main()
//{
//	
//	return 0;
//}

//struct Node
//{
//	int data;
//	struct Node next;
//};//error

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//int main()
//{
//	printf("%zu\n", sizeof(struct Node));//无限大不可以
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//#include<stddef.h>
//int main()
//{
//	/*printf("%zu\n", sizeof(struct S1));
//	printf("%zu\n", sizeof(struct S2));*/
//	
//	struct S1 s1;
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	struct S2 s2;
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));
//	return 0;
//}
//#pragma park(1)//1  2  4  8 ........
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma park()//恢复默认对齐数
//
//int main()
//{
//	struct S s;
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//
//void print1(struct S t)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", t.data[i]);
//	}
//	printf("%d\n", t.num);
//}
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", ps->data[i]);
//	}
//	printf("%d\n", ps->num );
//}
//int main()
//{
//	struct S s = { {1,2,3,4,5},100 };
//	print1(s);
//	print2(&s);
//	return 0;
//}

//struct A
//{
//	int _a : 2;// 2表示占用2个二进制位
//	int _b : 3;
//	int _c : 10;
//};
//struct B
//{
//	int _a;
//	int _b;
//	int _c;
//};
//
//int main()
//{
//
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 6;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

int main()
{
	struct A sa = { 0 };
	scanf("%d", &sa._b);//error

	//正确示范
	int b = 0;
	scanf("%d", &b);
	sa._b = b;
	return 0;
}














