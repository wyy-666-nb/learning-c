 /*
  * ------------------------------------------------------------
  * 语法点：指针（函数指针数组,转移表）
  * 来源：鹏哥C语言2026  第121-122集
  * 日期：2026-10-22
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int Sub(int x, int y)
//{
//    return x - y;
//}
//
//int Mul(int x, int y)
//{
//    return x * y;
//}
//
//int Div(int x, int y)
//{
//    return x / y;
//}
//
//int main()
//{
//    int (*pf1)(int, int) = Add;
//    int (* arr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//    
//    return 0;
//}


//实现一个计算器


int Add(int x, int y)
{
    return x + y;
}

int Sub(int x, int y)
{
    return x - y;
}

int Mul(int x, int y)
{
    return x * y;
}

int Div(int x, int y)
{
    return x / y;
}

void menu()
{
	printf("------------------------------\n");
	printf("-------1.add       2.sub------\n");
	printf("-------3.mul       4.div------\n");
	printf("-------0.exit           ------\n");
	printf("------------------------------\n");
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//
//		//函数指针数组
//		int(* pf[5])(int, int) = {NULL,Add,Sub,Mul,Div };
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数");
//			scanf("%d %d", &x, &y);
//			r = Add(x,y);
//			printf("%d\n", r);
//			break;
//		case 2:
//			printf("请输入两个操作数");
//			scanf("%d %d", &x, &y);
//			r = Sub(x, y);
//			printf("%d\n", r);
//			break;
//		case 3:
//			printf("请输入两个操作数");
//			scanf("%d %d", &x, &y);
//			r = Mul(x,y);
//			printf("%d\n", r);
//			break;
//		case 4:
//			printf("请输入两个操作数");
//			scanf("%d %d", &x, &y);
//			r = Div(x,y);
//			printf("%d\n", r);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请输入0到4的值\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int r = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);

		//函数指针数组 - 转移表
		int(*pfarr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
		if (input >= 1 && input <= 4)
		{
			printf("请输入2个操作数");
			scanf("%d%d",&x,&y);
			r = pfarr[input](x, y);
			printf("结果是：%d\n",r);
		}
		else if (input == 0)
		{
			printf("退出计算机\n");
		}
		else
		{
			printf("输入错误，请重新输入");
		}

		
	} while (input);
	return 0;
}