 /*
  * ------------------------------------------------------------
  * 语法点：联合和枚举
  * 来源：鹏哥C语言2026  第162-165集
  * 日期：2026-11-03
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *  
  *
  * 【关键注意点】
  *   联合体的特点是所有成员共享同一块内存空间,联合体的大小至少是最大成员的大小
  *   当最大成员大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍
  *   
  * 【和相似语法的区别】
  *
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct S
//{
//    char c;
//    int i;
//};

//union Un
//{
//    char c;
//    int i;
//};
//int main()
//{
//    union Un un;
//    printf("%zu\n", sizeof(un));//4
//    printf("%p\n", &un);
//    printf("%p\n", &un.c );
//    printf("%p\n", &un.i );
//    return 0;
//}


//union Un
//{
//    char c;
//    int i;
//};
//int main()
//{
//    union Un un = {0};
//	un.i = 0x11223344;
//	un.c = 0x55;
//    return 0;
//}

//union Un
//{
//    char c[5];
//    int i;
//};
//
//int main()
//{
//    printf("%d\n", sizeof(union Un));
//    return 0;
//}


//union Un
//{
//    short c[7];
//    int i;
//};
//
//int main()
//{
//    printf("%d\n", sizeof(union Un));
//    return 0;
//}

//int chaec_sys()
//{
//    int n = 1;
//    if(*(char*)&n == 1)
//		return 1; // 小端
//    else
//		return 0; // 大端
//}


//int chaec_sys()
//{
//    union Un
//    {
//        char c;
//        int i;
//    }un;
//    un.i = 1;
//    return un.c;
//
//}
//
//int main()
//{
//
//    return 0;
//}


//enum SEX
//{
//	//枚举类型的可能取值--枚举常量
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};

//enum SEX
//{
//	//枚举类型的可能取值--枚举常量
//	MALE = 5,
//	FEMALE,//6
//	SECRET//7
//};

enum SEX
{
	//枚举类型的可能取值--枚举常量
	MALE ,//0
	FEMALE = 4,
	SECRET //5
}; 
enum Color
{
	RED,//0
	GREEN,//1
	BLUE//2
};

int main()
{
	/*enum SEX sex;
	enum Color color = RED;*/
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);	
	return 0;
}