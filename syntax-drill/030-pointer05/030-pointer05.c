 /*
  * ------------------------------------------------------------
  * 语法点：指针（冒泡排序，二级指针，指针数组，字符指针变量）
  * 来源：鹏哥C语言2026  第112-115集
  * 日期：2026-10-20
  * ------------------------------------------------------------
  *
  * 【它解决什么问题】
  *
  *
  * 【语法格式】
  *
  *
  * 【关键注意点】
  *   指针变量指向字符串最好有const修饰
  *   -
  *
  * 【和相似语法的区别】
  *
  */

#include <stdio.h>

//void  printf_arr(int arr[], int sz)
//{
//    for (int i = 0;i < sz;i++)
//    {
//        printf("%d",arr[i]);
//    }
//}
//
//void bubble_sort(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0;i < sz - 1;i++)
//    {
//        int flag = 1;//标记是否有序
//        int j = 0;
//        for (j = 0; j < sz - 1 - i;j++ )
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                flag = 0;
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//           
//        }
//        if (flag == 1)
//        {
//            break;
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//    //对数组进行排序  - 升序
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble_sort(arr,sz);
//    //输出
//    printf_arr(arr,sz);
//    return 0;
//}


//int main()
//{
//	int a = 10;
//    int* pa = &a;//p就是指针变量（一级指针变量）
//	int** ppa = &pa;//pp是指针变量（二级指针变量）
//	//*ppa == pa
//	//*pa == **ppa == a
//	return 0;
//}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* arr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	const char* ps = "abcdef";//"abcdef"是常量字符串，这里的赋值是把首字符a的地址赋值给ps
//	printf("%c\n", *ps);
//	printf("%s\n", ps);
//	return 0;
//}



int main()
{
	const char* ps[3] = {"zhangsan","lisi","wangwu"};//字符指针的数组
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("%s\n",ps[i]);
	}
	return 0;
}