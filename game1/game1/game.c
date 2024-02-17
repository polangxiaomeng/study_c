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
