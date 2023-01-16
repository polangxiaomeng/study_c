#define _CRT_SECURE_NO_WARNINGS 1
#include"game1.h"

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		Player(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = JudgeWin(board, ROW, COL, '*');
		if (ret != 'C')
			break;
		//��������
		Computer(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = JudgeWin(board, ROW, COL, '#');
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���ʤ\n");
		Sleep(1000);
		system("cls");
	}
	else if (ret == '#')
	{
		printf("����ʤ\n");
		Sleep(1000);
		system("cls");
	}
	else
	{
		printf("ƽ��\n");
		Sleep(1000);
		system("cls");
	}
}

void menu()
{
	printf("********************\n");
	printf("********************\n");
	printf("****1.��ʼ��Ϸ******\n");
	printf("****0.�˳���Ϸ******\n");
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
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);
}
