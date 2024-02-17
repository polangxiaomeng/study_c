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
