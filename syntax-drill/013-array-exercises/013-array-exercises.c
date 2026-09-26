 /*
  * ------------------------------------------------------------
  * 语法点：数组练习
  * 来源：鹏哥C语言2026  第 51-52 集
  * 日期：2026-09-26
  * ------------------------------------------------------------
  */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome-to-china";
//	char arr2[] = "################";
//	int right = (int)strlen(arr1)-1;
//	int left = 0;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位是毫秒
//		system("cls");
//		left++;
//		right--;
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int n = 7;
//	int m = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (m = 0;m < sz;m++)
//	{
//		if (arr[m] == n)
//		{
//			printf("找到了下标是%d",m );
//			break;
//		}
//	}
//	if (m == sz)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//注意点：二分查找只能用于升序或降序
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while(left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}

	return 0;
}