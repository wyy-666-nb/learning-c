 /*
  * ------------------------------------------------------------
  * 语法点：数据在内存中的存储
  * 来源：鹏哥C语言2026  第148-153集
  * 日期：2026-11-01
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  * 
  *
  * 【关键注意点】
  *    大端存储模式：高位字节存储在低地址，低位字节存储在高地址
  *    小端存储模式：低位字节存储在低地址，高位字节存储在高地址
  *    浮点数V= (-1)^s * M * 2^E
  *    有的浮点数不可以精确保存
  * 【和相似语法的区别】
  *
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int a = 0x11223344;
//
//    return 0;
//}

//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		printf("小端存储模式\n");
//	}
//	else
//	{
//		printf("大端存储模式\n");
//	}
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return (*(char*)&a);
//}
//
//int main()
//{
//	if (check_sys() == 1)
//	{
//		printf("小端存储模式\n");
//	}
//	else
//	{
//		printf("大端存储模式\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;//放不下-1，溢出，变成了255
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
//	//%d 是以10进制打印的是有符号整数
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u", a);
//	//%u 是以10进制打印无符号整数
//	return 0;
//}

//int main()
//{
//	//有符号char的取值范围:-128-127
//	char a = 128;
//	printf("%u", a);
//	return 0;
//}

#include <string.h>
//int main()
//{
//	char a[1000];
//	//-1  -2  -3  -4  .......-128   127   126  ........1   0
//	//这是一个循环，-1的二进制是11111111，-2的二进制是11111110，-3的二进制是11111101，-4的二进制是11111100，......-128的二进制是10000000，127的二进制是01111111，126的二进制是01111110，......1的二进制是00000001，0的二进制是00000000
//	
//	int i;
//	for (i = 0;i < 1000;i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//unsigned char i = 0;//0-255
//
//int main()
//{
//	for (i = 0;i <= 255;i++)
//	{
//		printf("hello");
//	}
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("%d\n",n);
//	printf("%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *pFloat);
//}

int main()
{
	return 0;
}



