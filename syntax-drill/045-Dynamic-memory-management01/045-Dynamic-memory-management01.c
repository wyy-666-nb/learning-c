 /*
  * ------------------------------------------------------------
  * 语法点：动态内存管理01（malloc/free/calloc/realloc）
  * 来源：鹏哥C语言2026  第166-167集
  * 日期：2026-11-03
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *  void* malloc(size_t size);
  *  void* free(void* ptr);
  *  void* calloc(size_t num ,size_t size);
  *  void* realloc(void* ptr ,size_t size);
  * 【关键注意点】
  *   malloc   --向内存的堆区申请一块连续可用的空间，返回该空间的起始地址
  *   size的单位是字节
  *   free   --释放之前通过动态内存分配函数所申请的内存空间
  *   calloc  -为num个大小为size的元素开辟一块空间，并且把空间的每个字节初始化为0
  *   realloc  -重新调整之前分配的内存块大小，可以在不丢失原有数据的情况下，扩大或缩小动态分配的内存块
  *   原有空间之后没有足够大的空间，会在内存的堆区寻找新的满足要求的空间，返回新的起始地址（旧空间的数据会拷贝到新空间，保证数据不会丢失）
  *   释放旧空间，返回新空间的起始地址
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int arr[] = { 1,2,3,4,5 };//申请20个自己的空间--栈区
//
//    int* p = (int*)malloc(20);//堆区上申请20个字节的空间
//    if (p == NULL)
//    {
//        perror("use malloc");
//    }
//    //使用空间
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        *(p + 1) = i + 1;//p[i] =i+1
//    }
//
//
//    //释放内存
//    free(p);//p为野指针
//    p = NULL;
//    return 0;
//}

//int main()
//{
//    int arr[] = { 1,2,3,4,5 };//申请20个自己的空间--栈区
//
//    int* p = (int*)malloc(INT_MAX * 100);//开辟的空间太大可能会失败
//    if (p == NULL)
//    {
//        perror("use malloc");
//    }
//    //使用空间
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        *(p + 1) = i + 1;//p[i] =i+1
//    }
//
//
//    //释放内存
//    free(p);//p为野指针
//    p = NULL;
//    return 0;
//}



//int main()
//{
//    int* p = (int*)calloc(5 ,sizeof(int));//堆区上申请20个字节的空间
//    if (p == NULL)
//    {
//        perror("use malloc");
//    }
//    //使用空间
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        *(p + 1) = i + 1;//p[i] =i+1
//    }
//
//
//    //释放内存
//    free(p);//p为野指针
//    p = NULL;
//    return 0;
//}


//int main()
//{
//    int* p = (int*)calloc(5, sizeof(int));
//    if (p == NULL)
//    {
//        perror("use malloc");
//    }
//    //使用空间
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        *(p + 1) = i + 1;//p[i] =i+1
//    }
//    //希望空间能放10个整型
//    int* ptr = (int*)realloc(p, 10 * sizeof(int));
//    if (ptr == NULL)
//    {
//        perror("use realloc");
//        return 1;
//    }
//    else
//    {
//        p = ptr;//继续使用p来维护空间
//        ptr = NULL;
//    }
//    //继续使用
//    for (i = 5;i < 10;i++)
//    {
//        p[i] = i + 1;
//    }
//
//    //释放
//    free(p);
//
//    return 0;
//}

int main()
{
    int* p = (int*)calloc(5, sizeof(int));
    if (p == NULL)
    {
        perror("use malloc");
    }
    //使用空间
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        *(p + 1) = i + 1;//p[i] =i+1
    }
    //希望空间能放10个整型
    int* ptr = (int*)realloc(p, 100 * sizeof(int));
    if (ptr == NULL)
    {
        perror("use realloc");
        return 1;
    }
    else
    {
        p = ptr;//继续使用p来维护空间
        ptr = NULL;
    }
    //继续使用
    for (i = 5;i < 10;i++)
    {
        p[i] = i + 1;
    }
    //释放
    free(p);
    return 0;
}