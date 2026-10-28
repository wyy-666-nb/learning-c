 /*
  * ------------------------------------------------------------
  * 语法点：字符函数(字符分类函数，字符转换函数)
  * 来源：鹏哥C语言2026  第135-136集
  * 日期：2026-10-28
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *
  *
  * 【关键注意点】
  *   -
  *   -
  *
  * 【和相似语法的区别】
  *
  */

#include <stdio.h>
#include <ctype.h>
//int main()
//{
//    //int c = isdigit('x');
//    printf("%d", c);
//    return 0;
//}


//int main()
//{
//	char arr[] = "I am a Student";
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] -= 32;
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int r = toupper('x');
//	printf("%c", r);
//	putchar(r);
//	return 0;
//}

//int main()
//{
//	int r = getchar();//scanf("%c", &r);
//	putchar(r);//printf("%c\n",r);
//	return 0;
//}

int main()
{
	char arr[] = "I am a Student";
	int i = 0;
	while (arr[i] != '\0')
	{
		if (islower(arr[i]))
		{
			arr[i] = toupper(arr[i]);
		}
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}