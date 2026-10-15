 /*
  * ------------------------------------------------------------
  * 语法点：指针运算
  * 来源：鹏哥C语言2026  第99-102集
  * 日期：2026-10-15
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *
  *
  * 【关键注意点】
  *  指针相减的前提是两个指针指向同一块空间
  *   数组名是地址，是数组首元素的地址   &arr[0] = arr
  *
  * 【和相似语法的区别】
  *
  */

#include <stdio.h>

//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int* p = &arr[0];
//    int i = 0;
//    for (i = 0;i < 10;i++)
//    {
//        printf("%d ",*p);
//        p++;
//    }
//    return 0;
//}

//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int* p = &arr[9];
//    int i = 0;
//    for (i = 0;i < 10;i++)
//    {
//        printf("%d ", *(p-i));
//    }
//    return 0;
//}

//int main()
//{
//    int arr[10] = { 0 };
//
//    printf("%d",&arr[9] - &arr[0]);
//    
//    return 0;
//}
//相减错误示范
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[7];
//	&arr[8] - &ch[5];//error
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = strlen(arr);//统计的是\0之前的字符个数
//	printf("%zu", len);
//	return 0;
//}
//size_t my_strlen(char* p)
//{
//	char* start =p;
//	while (*p != '\0')
//		p++;
//	return p - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);//统计的是\0之前的字符个数
//	printf("%zu", len);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	while (p < &arr[10])
	{
		printf("%d",*p);
		p++;
	}
	return 0;
}