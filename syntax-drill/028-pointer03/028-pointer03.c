 /*
  * ------------------------------------------------------------
  * 语法:指针03(const修饰变量，野指针，assert)
  * 来源：鹏哥C语言2026  第102-107集
  * 日期：2026-10-18
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *  指针为空指针会直接报错，方便程序员查找问题
  *  
  * 【语法格式】
  *  assert(判断的式子)
  *
  * 【关键注意点】
  *   const  是常属性-不能被改变的属性
  *  野指针就是指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）
  *  指针指向的内容不属于当前程序
  * 【和相似语法的区别】
  *  if语句在最后release中会一直存在
  *  assert会在release版本中被消除
  */

#include <stdio.h>
//
//int main()
//{
//    //const int n = 10;//常变量-具有常属性的变量（不能被修改了）骨子里还是个变量
//    //n = 100;
//    //printf("%d", n);
//    
//    //const int n = 10;//C99之前，这个n不能放在数组的大小指定的位置
//    //int arr[n];
//    //arr[0] = 1;
//
//    const int n = 10;
//    int* p = &n;
//    *p = 100;
//    printf("%d", n);
//    return 0;
//}


//const修饰指针变量
//放在*的左边:const修饰的指针变量指向的内容，不能通过指针变量修改它指向的内容，但可以修改指针变量的指向
//放在*的右边:const修饰的指针变量本身，不可以修改指针变量的指向，但可以通过修改指针改变指针指向的内容
//int main()
//{
//	const int n = 20;
//	const int* p = &n ;
//	//*p = 100;//不可以执行
//	int m = 100;
//	p = &m;
//	prontf("%d", n);
//	return 0;
//}

//int main()
//{
//	const int n = 20;
//	int* const p = &n;
//	*p = 100;
//	int m = 100;
//	//p = &m;//不可以执行
//	prontf("%d", n);
//	return 0;
//}

//指针未初始化
//int main()
//{
//	//int a = 10;
//	//int* p = &a;//初始化
//
//	int* p;
//	*p = 20;//p就是野指针
//
//	return 0;
//}
//int g_val;
////全局变量不主动初始化的情况下，编译器默认给你初始化为0
//
//int main()
//{
//	int num;
//	//局部变量不初始化的，里边的值是不可预测的，可能是随机值
//
//	printf("%d\n",g_val);
//	printf("&d\n",num);
//	return 0;
//}



//指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	//0~9
//	for (i = 0;i <= 11;i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}


//指针指向的空间释放
//int test()
//{
//	int n = 100;
//	return &n;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n",*p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* p2 = NULL;
//	//NULL  专门用来初始化指针变量，初始化为NULL的指针变量，意味着：这个指针没有指向有效的空间，我们暂时不能使用它
//	 
//	return 0;
//}
//#define NDEBUG
//#include <assert.h>
//int main()
//{
//	int* p = NULL;
//	assert(p != NULL);
//	printf("%d", *p);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//
//	int* p = &a;
//	assert(p != NULL);
//	printf("%d", *p);
//	return 0;
//}
// 
//指针-指针
size_t my_strlen2(const char* p)
{
	char* start = p;
	while (*p != '\0')
	{
		p++;
	}
	return p - start;
}
 

//计数器
size_t my_strlen(const char* p)
{
	size_t count = 0;
	assert(p != NULL);
	while (*p != '0')
	{
		count++;
		p++;
	}
	return count;
}
int main()
{

	char arr[] = "abcdef";
	size_t len = my_strlen(arr);//数组名是数组首元素的地址arr ==&arr[0]
	printf("%zu\n", len);
	return 0;
}