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

//�Ų���Χ�׵ĸ���
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
		printf("����������λ�õ��кź��к�:>");
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
				printf("�������ѱ�ռ��\n");
			}
			else
			{
				PrintBoard(mine, ROW, COL);
				printf("��ȵ����ף���Ϸ����\n");
				break;
			}
		}
		else
			printf("����Ƿ�������������\n");
		if (win == ROW * COL - MINE)
		{
			PrintBoard(mine, ROW, COL);
			printf("��ϲ����ɨ�׳ɹ�\n");
			break;
		}
		PrintBoard(show, row, col);
	}
}