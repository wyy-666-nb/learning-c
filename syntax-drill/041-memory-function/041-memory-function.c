 /*
  * ------------------------------------------------------------
  * 语法点：内存函数
  * 来源：鹏哥C语言2026  第145-147集
  * 日期：2026-10-28
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *  void* memcpy (void* destination , const void* source , size_t num);
  *  void* memmove (void* destination , const void* source , size_t num);
  *  void* memset (void* ptr , int value , size_t num);
  *  int memcmp (const void* ptr1, const void* ptr2,size_t num);
  * 【关键注意点】
  *   memcpy  -完成内存块的拷贝，不关注内存中是啥
  *   如果source和destination有重叠，复制的结果是未定义的
  *   memmove  -不管重叠不重叠都可以用
  *   memset  -用来设置内存块的内容，将内存中指定长度的空间设置为特定的内容
  *   memcmp  -比较指定的两块内存块的内容，比较从otrr1和ptr2指针指向的位置开始，向后num个字节
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//    int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr2[20] = { 0 };
//    int sz = sizeof(arr2) / sizeof(arr2[0]);
//    memcpy(arr2,arr1,20);//20个字节
//    for (int i = 0;i < sz; i++)
//    {
//        printf("%d\n", arr2[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr2[20] = { 0 };
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    memcpy(arr1+2 , arr1, 20);//重叠现象，有可能正确拷贝，也可能发生错误
//    for (int i = 0;i < sz; i++)
//    {
//        printf("%d\n", arr1[i]);
//    }
//    return 0;
//}

//
//int main()
//{
//    int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr2[20] = { 0 };
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    memmove(arr1+2 , arr1, 20);
//    for (int i = 0;i < sz; i++)
//    {
//        printf("%d\n", arr1[i]);
//    }
//    return 0;
//}
#include <assert.h>
//void* my_memcpy(void* dest , void* src,size_t num)
//{
//    void* ret = dest;
//    assert(dest && src);
//    while (num--)
//    {
//        *(char*)dest = *(char*)src;
//        dest = (char*)dest + 1;
//        src = (char*)src + 1;
//    }
//    return ret;
//}
//
//int main()
//{
//    int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr2[20] = { 0 };
//    int sz = sizeof(arr2) / sizeof(arr2[0]);
//    my_memcpy(arr2 + 2, arr1, 20);
//    for (int i = 0;i < sz; i++)
//    {
//        printf("%d\n", arr2[i]);
//    }
//    return 0;
//}

//void* my_memmove(void* dest , void* src,size_t num)
//{
//    void* ret = dest;
//    assert(dest && src);
//    if (dest < src)
//    {
//        while (num--)
//        {
//            *(char*)dest = *(char*)src;
//            dest = (char*)dest + 1;
//            src = (char*)src + 1;
//        }
//    }
//    else
//    {
//        while (num--)
//        {
//            *((char*)dest + num) = *((char*)src + num);
//        }
//    }
//    return ret;
//}
//
//int main()
//{
//    int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr2[20] = { 0 };
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    my_memmove(arr1+2 , arr1, 20);
//    for (int i = 0;i < sz; i++)
//    {
//        printf("%d\n", arr1[i]);
//    }
//    return 0;
//}


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//memset(arr, 1, 5);//以字节为单位
//	memset(arr, 0, 20);
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,1,5 };
	int r = memcmp(arr1, arr2, 13);
	printf("%d\n", r);
	return 0;
}