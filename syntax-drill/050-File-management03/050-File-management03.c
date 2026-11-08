 /*
  * ------------------------------------------------------------
  * 语法点：文件管理03
  * 来源：鹏哥C语言2026  第178-180集
  * 日期：2026-11-08
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *  int fprintf(FILE* stream , const char* format ,...);
  *  int fscanf(FILE* stream , const char* format,...);
  *  int sprintf(char* str , const char* format ,...);
  *  int fscanf(char* str , const char* format,...);
  *  size_t fwrite(const void* ptr ,size_t size,size_t count ,FILE* stream);
  *  size_t fread(const void* ptr ,size_t size,size_t count ,FILE* stream);
  * 【关键注意点】
  *   fprintf   -将格式化数据写入指定文件流的函数
  *   fscanf   -是从指定文件流中读取格式化数据的函数
  *   sprintf  -将格式化的数据写入字符数组（字符串）
  *   sscanf  -从字符串中读取格式化数据
  *   fwrite  =用于将数据块写入stream指向的文件流中，是以2进制的形式写入的
  *   fread  -用于从stream指向的文件流中读取数据块，并将其储存到ptr指向的内存缓冲区
  * 【和相似语法的区别】
  *
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//
//};
//int main()
//{
//    struct Stu s = { "zhangsan",20,95.5f };
//    FILE* fp = fopen("test.txt","w");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    fprintf(fp,"%s %d %.2f\n", s.name, s.name, s.score);
//
//
//    //不再使用文件需关闭文件
//    fclose(fp);
//    fp = NULL;//将指针置为NULL，避免成为野指针
//    return 0;
//}

//
//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//
//};
//int main()
//{
//    struct Stu s = { "zhangsan",20,95.5f };
//    FILE* fp = fopen("test.txt", "w");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    fprintf(fp, "%s %d %.2f\n", s.name, s.name, s.score);
//
//
//    //不再使用文件需关闭文件
//    fclose(fp);
//    fp = NULL;//将指针置为NULL，避免成为野指针
//    return 0;
//}


//
//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//
//};
//int main()
//{
//    struct Stu s = { 0 };
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //读文件
//    fscanf(fp,"%s %d %f",s.name ,&(s.age), &(s.score));
//
//    //不再使用文件需关闭文件
//    fclose(fp);
//    fp = NULL;//将指针置为NULL，避免成为野指针
//    return 0;
//}


//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//
//};
//int main()
//{
//    struct Stu s = { "zhangsan",20,95.5f };
//    char arr1[30] = { 0 };
//    sprintf(arr1, "%s %d %f", s.name, s.age, s.score);
//    printf("%s\n", arr1);
//
//    //从arr1中解析出一个结构体数据
//    struct Stu t = { 0 };
//    sscanf{arr1,"%s %d %f",t.name,&(t.age),&(t.score)};
//
//    return 0;
//}

//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//
//};
//int main()
//{
//    struct Stu s = { "zhangsan",20,95.5f };
//    FILE* fp = fopen("test.txt","wb");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    fwrite(&s , sizeof(struct Stu),1,fp);
//
//    //不再使用文件需关闭文件
//    fclose(fp);
//    fp = NULL;//将指针置为NULL，避免成为野指针
//    return 0;
//}

struct Stu
{
    char name[20];
    int age;
    float score;

};
int main()
{
    struct Stu s = { "zhangsan",20,95.5f };
    FILE* fp = fopen("test.txt", "rb");
    if (fp == NULL)
    {
        perror("fopen");
        return 1;
    }
    //读文件
    fread(&s, sizeof(struct Stu), 1, fp);

    //不再使用文件需关闭文件
    fclose(fp);
    fp = NULL;//将指针置为NULL，避免成为野指针
    return 0;
}