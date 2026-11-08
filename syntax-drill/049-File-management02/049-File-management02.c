 /*
  * ------------------------------------------------------------
  * 语法点：文件管理02
  * 来源：鹏哥C语言2026  第174-177集
  * 日期：2026-11-06
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *  FILE* fopen (const char* filename , const char* mode);
  *  int fclose (FILE* stream);
  *  int fputc(int character , FILE* stream);
  *  int fgetc (FILE* stream);
  *  int feof(FILE* stream);
  *  int ferror(FILE* stream);
  *  int fputs(const char* str,FILE* stream);
  *  int fgets(char* str , int num,FILE* stream);
  * 【关键注意点】
  *   -
  *   -
  *
  * 【和相似语法的区别】
  *
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    FILE* pf = fopen("test.txt","r");//同一路径
//    //FILE* pf = fopen("../../test.txt","r");//上上级路径相对路径
//    //FILE* pf = fopen("D:/code/2025/test.txt","r");//这是绝对路径的例子
//    if (pf == NULL)
//    {
//        perror("fopen");
//    }
//    //读文件
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}


//int main()
//{
//    FILE* pf = fopen("test.txt","r");//同一路径
//    //FILE* pf = fopen("../../test.txt","r");//上上级路径相对路径
//    //FILE* pf = fopen("D:/code/2025/test.txt","r");//这是绝对路径的例子
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    //fputc('a', pf);
//    for (char ch = 'a';ch <= 'z';ch++)
//    {
//        fputc(ch,pf);
//    }
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}


//int main()
//{
//    for (char ch = 'a';ch <= 'z';ch++)
//    {
//        fputc(ch, stdout);//向输出流写字符
//    }
//    return 0;
//}


//int main()
//{
//    FILE* pf = fopen("test.txt","r");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //读文件
//    int ch = 0;
//    while ((ch = fgetc(pf)) != EOF)
//    {
//        printf("%c", ch);
//    }
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//int main()
//{
//    int ch = 0;
//    while ((ch = fgetc(stdin)) != EOF)
//    {
//        printf("%c", ch);
//    }
//    return 0;
//}

