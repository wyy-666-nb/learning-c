 /*
  * ------------------------------------------------------------
  * 语法点：字符串函数03
  * 来源：鹏哥C语言2026  第142-144集
  * 日期：2026-10-29
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *  char* strstr(const char* str1,const char* str2);
  *  char* strtok(char* str,const char* delim);
  *  char* strerror(int errnum);
  * void perror(const char* str);
  * 【关键注意点】
  *   strstr  -查找str2指向的字符串在str1指向的字符串中第一次出现的位置
  *   strtok  -分割字符串，根据delim参数中指定的分隔符，将输入的字符串str拆分成多个子字符串
  *   会直接在原始字符串中插入\0终止字符,替换分隔符位置，原始字符串会被修改
  *   sreerror  -可以通过参数部分的errnum表示错误码，得到对应信息，并返回这个错误信息字符串首字符的地址
  *   只针对标准库中的错误码信息
  【和相似语法的区别】
  *
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//    char arr1[] = "abcdefabcdef";
//    char arr2[] = "def";
//    char* p = strstr(arr1, arr2);
//    if (p != NULL)
//    {
//        printf("%s\n", p);
//    }
//    else
//    {
//        printf("没找到");
//    }
//
//    return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//    const char* s1;
//    const char* s2;
//    const char* cp = str1;
//    if (*str2 == '\0')
//        return (char*)str1;
//    while (*cp)
//    {
//        s1 = cp;
//        s2 = str2;
//        while (*s2 && *s1 && *s1 == *s2)
//        {
//            s1++;
//            s2++;
//        }
//        if (*s2 == '\0')
//            return (char*)cp;
//        cp++;
//    }
//    return NULL;
//}
//int main()
//{
//    char arr1[] = "abcdefabcdef";
//    char arr2[] = "def";
//    char* p = my_strstr(arr1, arr2);
//    if (p != NULL)
//    {
//        printf("%s\n", p);
//    }
//    else
//    {
//        printf("没找到");
//    }
//    return 0;
//}

//int main()
//{
//	char arr[] = "wangyaoyang@qq.com";
//	//wangyaoyang\0qq\0com
//	const char* p = "@.";
//	char buf[30] = { 0 };
//	strncpy(buf, arr, 29);
//	char* pr = strtok(buf,p);
//	printf("%s\n", pr);
//	pr = strtok(NULL, p);
//	printf("%s\n", pr);
//	pr = strtok(NULL, p);
//	printf("%s\n", pr);
//	pr = strtok(NULL, p);
//	printf("%s\n", pr);
//	return 0;
//}
//int main()
//{
//	char arr[] = "wangyaoyang@qq.com";
//	//wangyaoyang\0qq\0com
//	const char* p = "@.";
//	char buf[30] = { 0 };
//	strncpy(buf, arr, 29);
//	char* pr = NULL;
//	for (pr = strtok(buf, p);pr != NULL;pr = strtok(NULL,p))
//	{
//		printf("%s\n", pr);
//	}
// //static修饰的变量，下一次进入函数还可以继续使用
//	return 0;
//}
#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");//以读的形式打开文件，如果文件不存在，打开文件就失败了，会返回一个NULL指针，而且会设置错误码到errno
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
int main()
{
	FILE* pf = fopen("data.txt", "r");//以读的形式打开文件，如果文件不存在，打开文件就失败了，会返回一个NULL指针，而且会设置错误码到errno
	if (pf == NULL)
	{
		perror("错误信息是：");
		//错误信息是：xxxx
		return 1;
	}
	else
	{
		printf("打开文件成功\n");
	}
	//读文件
	fclose(pf);
	pf = NULL;
	return 0;
}