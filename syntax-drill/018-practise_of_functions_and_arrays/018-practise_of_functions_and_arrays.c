#define _CRT_SECURE_NO_WARNINGS
#include "018-practise_of_functions_and_arrays.h"

/*  ================== 扫雷 Minesweeper ==================
 *  函数与数组综合练习
 *  已完成: init 初始化棋盘 / display 打印棋盘 / setmine 随机布雷 /
 *          findmine 排雷(踩雷判断、周围雷数统计、胜负判定)
 *  未完成: 展开一片(自动翻开周围空白区域)
 *          —— 这一块要等学完【递归】才能写, 详见 findmine() 里的注释。
 *  ====================================================  */


void init(char board[ROWS][COLS], int r, int c,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			board[i][j] = set;
		}
	}
}

void display(char board[ROWS][COLS], int r, int c)
{
	int i = 0;
	int j = 0;
	for (j = 1;j <= c;j++)
	{
		printf(" %d", j);
	}
	printf("\n");
	for (i = 1;i <= r;i++)
	{
		printf("%d", i);
		for (j = 1;j <= c;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void setmine(char board[ROWS][COLS], int r, int c)
{
	int count = easycount;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
static size_t GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8*'0';
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < r * c - easycount)
	{
		printf("请输入要排查的坐标: ");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你踩到雷了\n");
					display(mine, ROW, COL);
					break;
				}
				else
				{
					size_t count = GetMineCount(mine, x, y);
					show[x][y] = (char)(count +'0');
					//---------- 【待实现 · 需要递归】展开一片 ----------
					// 现在的效果: 每输入一个坐标, 只翻开这一个格子。
					// 真正的扫雷: 如果这个格子周围 8 格都没有雷(count == 0),
					// 就自动把它周围一圈格子也翻开; 新翻开的格子如果周围也没雷,
					// 还要继续往外翻, 一直展开到碰到数字为止。
					// 这种"自己调用自己"的写法就是【递归】。
					// 等学完递归那一课, 把 displayaround() 写好, 再在这里调用它:
					//     void displayaround(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
					// 提示: 递归先写"结束条件"(越界 / 不是'*' / 周围有雷 就 return),
					//       再写"自己调用自己"(对周围 8 个格子各调一次)。
					//----------------------------------------------
					display(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("该坐标已经被排查过了\n");
			}
			
		}
		else
		{
			printf("输入坐标有误，请重新输入\n");
		}
	}
	if(win==r*c-easycount)
	{
		printf("恭喜你，成功排查所有非雷区域\n");
		display(mine, ROW, COL);
	}
}
