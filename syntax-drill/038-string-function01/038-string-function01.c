 /*
  * ------------------------------------------------------------
  * 语法点：字符串函数
  * 来源：鹏哥C语言2026  第 ___ 集
  * 日期：2026-10-28
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *  size_t strlen (const char* str);    统计字符串中'\0'之前的字符个数
  *  char* strcpy(char* destination,const char* source);字符串拷贝，拷贝到源头字符串的\0为止
  * 
  * 【关键注意点】
  *   strlen必须以'\0'结束  返回值为size_t
  *   strcpy 源字符串必须以\0结束  会将源字符串的\0拷贝到目标空间，目标空间必须足够大，目标空间必须可修改
  *
  * 【和相似语法的区别】
  *
  */

#include <stdio.h>
//#include <string.h>
//int main()
//{
//    if (strlen("abc") - strlen("abcdef") > 0)//结果是size_t类型的不会小于0
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<=\n");
//    }
//
//    return 0;
//}

//size_t my_strlen(const char* s)
//{
//	if (*s != '\0')
//		return 1 + my_strlen(s + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	size_t len = my_strlen("abcdef");
//	printf("%zu\n",len);
//	return 0;
//}


//int main()
//{
//	char arr1[] = {"abcdef"};
//	char arr2[20] = { 0 };
//	//arr2 = arr1;//error    -数组名是一个常量地址
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
#include <assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*src !='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = {"abcdef"};
//	char arr2[20] = { 0 };
//	my_strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = { "abcdef" };
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}