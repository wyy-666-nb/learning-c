#define _CRT_SECURE_NO_WARNINGS

#include "018-practise_of_functions_and_arrays.h"

void menu()
{
	printf("-----------------------------\n");
	printf("------------1.play-----------\n");
	printf("------------0.exit-----------\n");
	printf("-----------------------------\n");
}

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	init(mine, ROWS, COLS,'0');
	init(show, ROWS, COLS,'*');

	display(show, ROW, COL);
	//布置雷
	setmine(mine, ROW, COL);
	display(mine, ROW, COL);
	//排雷
	findmine(mine,show,ROW,COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}