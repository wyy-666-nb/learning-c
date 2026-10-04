#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define easycount 10
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void init(char board[ROWS][COLS], int r, int c, char set);

//打印棋盘
void display(char board[ROWS][COLS], int r, int c);

//布置雷
//注意: 二维数组作参数时, 第二维(列数)必须和实参一致!
//mine 实际是 char[ROWS][COLS], 所以这里必须写 ROWS/COLS。
//写成 ROW/COL(9)编译器不给报错, 但函数内部会按"每行9个"去算地址,
//雷就会被放到错的格子里(对应 warning C4048: 数组的下标不同)。
void setmine(char mine[ROWS][COLS], int r, int c);

//排雷
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c);

/*  ================== 待实现: 展开一片(需要递归) ==================
 *  真正的扫雷: 翻开的格子如果周围 8 格都没有雷, 就自动把它周围一圈
 *  也翻开; 新翻开的格子如果周围也没雷, 就继续往外翻, 直到碰到数字为止。
 *  这种"自己调用自己"的写法就是【递归】。等学完递归那一课, 补上这个函数:
 *      void displayaround(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
 *  现在 findmine() 里没有调用它, 程序可以正常编译运行(只是不能自动展开)。
 *  ==============================================================  */
