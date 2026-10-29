 /*
  * ------------------------------------------------------------
  * 语法点：字符串函数02
  * 来源：鹏哥C语言2026  第139-141集
  * 日期：2026-10-29
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *  char* strcat (char* destination , const char* source);
  *  int strcmp (const char* str1 , const char* str2);
  *  char* strncpy (char* destination , const char* cource, size_t num);
  *  char* strncat (char* destination,const char* source ,size_t num);
  *  int strncmp (const char* str1 , const char* str2 , size_t num);
  * 【关键注意点】
  *   strcat  -字符串追加，把source指向的源字符串中的所有字符都追加到destination指向的空间中
  *   源字符串和目标字符串必须以\0结尾，目标空间足够大且可修改
  *   strcmp  -比较str1和str2指向的字符串，从第一个字符开始比较，如果ASC码值相同，就比较下一个，直到不相等的字符或结束
  *   1>2 返回大于0的值   1=2返回0    1<2 返回小于0的值
  *   strncpy  -字符串拷贝，将source指向的字符串拷贝到destination指向的空间中，最多拷贝num个字符
  *   指定了了拷贝的长度，源字符串不一定要有'\0'，会考虑目标空间大小是否足够会更安全
  *   strncat  -字符串追加，把source指向的字符串的内容，追加到destination指向的空间，最多追加num个字符
  *   会把\0也追加在后面
  *   strncmp -字符串比较，比较str1和str2指向的两个字符串的内容，最多比较num个字符
  *   
  * 【和相似语法的区别】
  *
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//    char arr1[20] = "hello ";
//    char arr2[] = "world";
//    char* p = strcat(arr1, arr2);
//    printf("%s", p);
//    return 0;
//}
#include <assert.h>
//char* my_strcat(char* dest,const char* src)
//{
//    char* ret = dest;
//    assert(dest && ret);
//    while (*dest)
//    {
//        dest++;
//    }
//    while (*dest++ = *src++)
//    {
//        ;
//    }
//    return ret;
//}
//int main()
//{
//    char arr1[20] = "hello ";
//    char arr2[] = "world";
//    char* p = my_strcat(arr1, arr2);
//    printf("%s", p);
//    return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int t = strcmp(arr1, arr2);
//	printf("%d", t);
//	return 0;
//}

//int my_strcmp(const char* s1,const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == 0)
//			return 0;
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int t = my_strcmp(arr1, arr2);
//	printf("%d", t);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello-------------";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 10);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcfjfj";
//	int t = strncmp(arr1, arr2,3);
//	printf("%d", t);
//	return 0;
//}
