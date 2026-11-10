 /*
  * ------------------------------------------------------------
  * 语法点：文件管理04
  * 来源：鹏哥C语言2026  第181-183集
  * 日期：2026-11-09
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *    int fseek(FILE* stream,long int offset ,int origin)
  *    long int ftell(FILE* stream);
  *    void rewind(FILE* stream);
  *    int fflush(FILE* stream);
  * 【关键注意点】
  *   fseek  -根据文件指针的位置和偏移量来定位文件指针（文件内容的光标）
  *   fteel  -返回文件指针相对于起始位置的偏移量
  *   rewind  -让文件指针的位置回到文件起始位置
  *   fflush  -强制刷新参数stream指定流的缓冲区，确保数据写入底层设备
  * 【和相似语法的区别】
  *
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    FILE* fp = fopen("test.txt","r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    int c = fgetc(fp);
//    fputc(c, stdout);//使用fputc在标准输出流上打印字符
//    //定位文件指针
//    fseek(fp,5, SEEK_SET);
//    c = fgetc(fp);
//    fputc(c, stdout);
//     
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL;//
//    return 0;
//}
