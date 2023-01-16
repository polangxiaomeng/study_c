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
	PrintBoard(mine, ROW, COL);

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