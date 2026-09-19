#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//函数
void game()
{
	int guess = 0;
	//生成随机数  rand  srand   time   srand((unsigned int)time(null));
	int r = rand() % 100 + 1;
	int count = 5;
	while (count > 0)
	{
		printf("你还有%d次机会", count);
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
		count --;
	}
	if (count == 0)
	{
		printf("很遗憾，5次机会用完了游戏结束\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("-----------------------\n");
		printf("---------1.play--------\n");
		printf("---------2.exit--------\n");
		printf("-----------------------\n");
		printf("-----------------------\n");
		printf("请选择:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();//玩游戏的函数
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;

		}

	} while (input);
	return 0;
}