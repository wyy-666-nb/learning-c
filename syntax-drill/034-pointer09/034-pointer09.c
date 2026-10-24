/*
 /*
  * ------------------------------------------------------------
  * 语法点：qsort模拟实现，sizeof和strlen的区别
  * 来源：鹏哥C语言2026  第126-127集
  * 日期：2026-10-24
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *
  *
  * 【关键注意点】
  *   sizeof计算变量所占内存空间大小的，单位是字节
  *   strlen是求字符串的长度
  *
  * 【和相似语法的区别】
  *
  */

#include <stdio.h>
#include <string.h>

struct str
{
    char name[20];
    int age;
};

int cmp_int(const void* p1, const void* p2)
{
    return(*(int*)p1 - *(int*)p2);
}
int cmp_struct_by_name(const void* p1, const void* p2)
{
    return strcmp(((struct str*)p1)->name, ((struct str*)p2)->name);
}

void print_arr(int* arr, int sz)
{
    int i = 0;
    for (i = 0;i < sz; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void print_stu(struct str* arr, int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
        printf("%s %d\n", arr[i].name, arr[i].age);
}


void Swap(char* buf1, char* buf2,size_t width)
{
    size_t i = 0;
    for (i = 0; i < width;i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}

void bubble_sort(void* base,size_t sz,size_t width,int (*cmp)(const void* p1,const void* p2))
{
    int i = 0;
    for (i = 0;i < sz - 1;i++)
    {
        int j = 0;
        for (j = 0;j < sz - 1 - i;j++)
        {

            if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
            {
                Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
            }
        }
    }
}
void test()
{
    int arr[] = { 8,7,6,5,4,3,2,1,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
    print_arr(arr, sz);
}
void test1()
{
    struct str arr[] = { {"zhangsan",18}, {"lisi",15} ,{"wangwu",25}};
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz, sizeof(arr[0]), cmp_struct_by_name);
    print_stu(arr, sz);
}

int main()
{
    //test();
    test1();
    return 0;
}


