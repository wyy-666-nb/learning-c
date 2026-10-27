 /*
  * ------------------------------------------------------------
  * 语法点：指针运算笔试题
  * 来源：鹏哥C语言2026  第132-134集
  * 日期：2026-10-27
  * ------------------------------------------------------------
  */

#include <stdio.h>

//int main()
//{
//    int a[5] = { 1,2,3,4,5 };
//    
//    int* ptr = (int*)(&a + 1);
//    
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//
//    return 0;
//}
//需在x86环境下运行
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
//
//int main()
//{
//	printf("%p\n",p + 0x1);//跳过一个结构体的大小，20个字节
//	printf("%p\n", (unsigned long)p + 0x1);//被强制转化为整型就是+1
//	printf("%p\n", (unsigned int*)p + 0x1);//+4
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号运算符，最右边的值是表达式算出来的值
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}
//x86环境
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//指针-指针得到的是指针和指针之间的元素个数
//%p打印出来的是-4的补码

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf(" %d, %d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}




//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRET" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n",**++cpp );
	printf("%s\n",*--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}

