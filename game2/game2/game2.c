#define _CRT_SECURE_NO_WARNINGS 1

#include"game2.h"


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitMine(mine, ROWS, COLS, '0');
	InitMine(show, ROWS, COLS, '*');

	//��ӡ��ͼ
	PrintBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	PrintBoard(mine, ROW, COL);

	//�������
	CleanMine(mine, show, ROW, COL);
}


void menu()
{	
	printf("**************************\n");
	printf("**************************\n");
	printf("******* 1.��ʼ��Ϸ *******\n");
	printf("******* 0.�˳���Ϸ *******\n");
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
			printf("ɨ�׿�ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default :
			printf("�����������������\n");
			break;
		}
	} while (input);
}