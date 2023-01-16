# 用C语言实现扫雷

## 1.游戏规则介绍

扫雷是一个十分经典的游戏，游戏目标是在最短的时间内根据出现的数字找出所有非雷格子，同时避免踩雷，踩到一个雷即全盘皆输。

## 2.实现思路

1. 创建菜单界面
2. 初始化地图
3. 打印地图
4. 布置雷
5. 排雷

新建多个文件实现，将头文件的包含、define定义、函数声明放在game.h的头文件中，将各部分函数的实现放在game.c文件中，将游戏的总体实现放在test.c的文件中。

### 1.创建菜单界面

```c
void menu()
{	
	printf("**************************\n");
	printf("**************************\n");
	printf("******* 1.开始游戏 *******\n");
	printf("******* 0.退出游戏 *******\n");
	printf("**************************\n");
	printf("**************************\n");
}

```

## 2.初始化地图

先创建两个二维数组

```c
char mine[ROWS][COLS] = { 0 };
char show[ROWS][COLS] = { 0 };
```

mine数组是我们要进行操控的数组，show数组是展示给玩家的数组。

将两个数组传入函数进行初始化

```c
void InitMine(char board[ROWS][COLS], int rows, int cols, char type)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
		{
			board[i][j] = type;
		}
}

InitMine(mine, ROWS, COLS, '0');
InitMine(show, ROWS, COLS, '*');
```

### 3.打印地图

```c
void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
```

### 4.布置雷

这里只需将mine数组中的'0'改为'1'来代替雷

```c
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
  	//MINE表示雷的个数
	while (count < MINE)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';
			count++;
		}
	}
}
```

### 5.排雷

#### 5.1排查周围8个单位雷的个数

```
//排查周围雷的个数
int CheckMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x + 1][y + 1] + mine[x + 1][y] + 
		mine[x + 1][y - 1] + mine[x - 1][y] + 
		mine[x - 1][y - 1] + mine[x - 1][y + 1] + 
		mine[x][y - 1] + mine[x][y + 1] - '0' * 8;
}
```

#### 5.2玩家排雷实现

```c
void CleanMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (1)
	{
		printf("请输入排雷位置的行号和列号:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0' && show[x][y] == '*')
			{
				mine[x][y] = '1';
				char count = CheckMineCount(mine, x, y) + '0';
				show[x][y] = count;
				win++;
			}
			else if (mine[x][y] == '1' && show[x][y] != '*')
			{
				printf("该坐标已被占用\n");
			}
			else
			{
				PrintBoard(mine, ROW, COL);
				printf("你踩到了雷，游戏结束\n");
				break;
			}
		}
		else
			printf("输入非法，请重新输入\n");
		if (win == ROW * COL - MINE)
		{
			PrintBoard(mine, ROW, COL);
			printf("恭喜您，扫雷成功\n");
			break;
		}
		PrintBoard(show, row, col);
	}
}
```

## 3.完整代码

```c
//game.h文件
#pragma once


#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE 10


//初始化背景
void InitMine(char board[ROWS][COLS], int rows, int cols, char type);
//打印地图
void PrintBoard(char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);
//玩家排雷
void CleanMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
```

```c
//game.c文件
#define _CRT_SECURE_NO_WARNINGS 1

#include "game2.h"

void InitMine(char board[ROWS][COLS], int rows, int cols, char type)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
		{
			board[i][j] = type;
		}
}

void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}



void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count < MINE)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';
			count++;
		}
	}
}

//排查周围雷的个数
int CheckMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x + 1][y + 1] + mine[x + 1][y] + 
		mine[x + 1][y - 1] + mine[x - 1][y] + 
		mine[x - 1][y - 1] + mine[x - 1][y + 1] + 
		mine[x][y - 1] + mine[x][y + 1] - '0' * 8;
}

void CleanMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (1)
	{
		printf("请输入排雷位置的行号和列号:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0' && show[x][y] == '*')
			{
				mine[x][y] = '1';
				char count = CheckMineCount(mine, x, y) + '0';
				show[x][y] = count;
				win++;
			}
			else if (mine[x][y] == '1' && show[x][y] != '*')
			{
				printf("该坐标已被占用\n");
			}
			else
			{
				PrintBoard(mine, ROW, COL);
				printf("你踩到了雷，游戏结束\n");
				break;
			}
		}
		else
			printf("输入非法，请重新输入\n");
		if (win == ROW * COL - MINE)
		{
			PrintBoard(mine, ROW, COL);
			printf("恭喜您，扫雷成功\n");
			break;
		}
		PrintBoard(show, row, col);
	}
}
```

```c
//test.c文件
#define _CRT_SECURE_NO_WARNINGS 1

#include"game2.h"


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化背景
	InitMine(mine, ROWS, COLS, '0');
	InitMine(show, ROWS, COLS, '*');

	//打印地图
	PrintBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//玩家排雷
	CleanMine(mine, show, ROW, COL);
}


void menu()
{	
	printf("**************************\n");
	printf("**************************\n");
	printf("******* 1.开始游戏 *******\n");
	printf("******* 0.退出游戏 *******\n");
	printf("**************************\n");
	printf("**************************\n");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷开始\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default :
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
```

