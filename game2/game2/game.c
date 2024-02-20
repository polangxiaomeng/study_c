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