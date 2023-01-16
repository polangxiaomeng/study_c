[TOC]

# 用C语言实现三子棋

## 1.三子棋是什么呢？

三子棋是一种民间传统游戏，又叫九宫棋、圈圈叉叉棋、一条龙、井字棋等。游戏分为双方对战，双方依次在9宫格棋盘上摆放棋子，率先将自己的三个棋子走成一条线就视为胜利，而对方就算输了，但是三子棋在很多时候会出现和棋的局面。

## 2.实现思路

1. 创建菜单界面（会有开始和结束的选项）
2. 初始化棋盘
3. 打印棋盘
4. 玩家落子
5. 判断胜负
6. 电脑随机落子
7. 判断胜负

新建多个文件实现，将头文件的包含、define定义、函数声明放在game.h的头文件中，将各部分函数的实现放在game.c文件中，将游戏的总体实现放在test.c的文件中。

### 1.创建菜单界面

```c
void menu()
{
	printf("********************\n");
	printf("********************\n");
	printf("****1.开始游戏******\n");
	printf("****0.退出游戏******\n");
	printf("********************\n");
	printf("********************\n");
}
```

### 2.初始化棋盘

先创建一个二维数组模拟棋盘坐标，将二维数组传入函数进行初始化

```c
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
}
```

### 3.打印棋盘

```c
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j != col -1)
			printf("|");
		}
		printf("\n");
		if(i != row-1)
		for (j = 0; j < col; j++)
		{
			printf("---");
			if (j != col - 1)
				printf("|");
		}
		printf("\n");
	}
}
```

### 4.玩家落子

```c
void Player(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	while (1)
	{
		printf("请输入要落子坐标:>");
		scanf("%d %d", &x, &y);
		if (x <= row + 1 && x > 0 || y <= col + 1 && y > 0)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用\n");
			}
		}
		else
			printf("输入非法\n");
	}
}
```

### 5.电脑随机落子

在主函数调用srand((unsigned)time(NULL)); 后面直接用rand就可以生成随机值

```c
void Computer(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			printf("电脑落子：\n");
			break;
		}
	}

}
```

### 6.判断胜负

将落子的类型传给函数，调用函数，若玩家胜则返回*，若电脑胜则返回#，若平局则返回P，若未分出胜负则返回C

```c
char JudgeWin(char board[ROW][COL], int row, int col, char type)
{
	int flag = 0;
	int i = 0;
	int j = 0;
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[0][0] != ' ')
	{
		return type;
	}
	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
	{
		return type;
	}
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
			return type;
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
			return type;
	}
	//判断平局
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				flag = 1;
		}
	}
	if (flag)
		return 'C';
	else
		return 'P';
}
```

### 7.完整代码

```c
//game.h文件
#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


#define ROW 3
#define COL 3

//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void Player(char board[ROW][COL], int row, int col);

//电脑下棋
void Computer(char board[ROW][COL], int row, int col);

//判断输赢
char JudgeWin(char board[ROW][COL], int row, int col, char type);
```

```c
//game.c文件
#define _CRT_SECURE_NO_WARNINGS 1
#include"game1.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j != col -1)
			printf("|");
		}
		printf("\n");
		if(i != row-1)
		for (j = 0; j < col; j++)
		{
			printf("---");
			if (j != col - 1)
				printf("|");
		}
		printf("\n");
	}
}



void Player(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	while (1)
	{
		printf("请输入要落子坐标:>");
		scanf("%d %d", &x, &y);
		if (x <= row + 1 && x > 0 || y <= col + 1 && y > 0)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用\n");
			}
		}
		else
			printf("输入非法\n");
	}
}


void Computer(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			printf("电脑落子：\n");
			break;
		}
	}

}


char JudgeWin(char board[ROW][COL], int row, int col, char type)
{
	int flag = 0;
	int i = 0;
	int j = 0;
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[0][0] != ' ')
	{
		return type;
	}
	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
	{
		return type;
	}
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
			return type;
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
			return type;
	}
	//判断平局
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				flag = 1;
		}
	}
	if (flag)
		return 'C';
	else
		return 'P';
}

```

```c
//test.c文件
#define _CRT_SECURE_NO_WARNINGS 1
#include"game1.h"

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		Player(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = JudgeWin(board, ROW, COL, '*');
		if (ret != 'C')
			break;
		//电脑下棋
		Computer(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = JudgeWin(board, ROW, COL, '#');
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家胜\n");
		Sleep(1000);
		system("cls");
	}
	else if (ret == '#')
	{
		printf("电脑胜\n");
		Sleep(1000);
		system("cls");
	}
	else
	{
		printf("平局\n");
		Sleep(1000);
		system("cls");
	}
}

void menu()
{
	printf("********************\n");
	printf("********************\n");
	printf("****1.开始游戏******\n");
	printf("****0.退出游戏******\n");
	printf("********************\n");
	printf("********************\n");
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);
}
```

