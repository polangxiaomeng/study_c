#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

enum Optition
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

static void menu()
{
	printf("********************************\n");
	printf("***    1. add     2. del     ***\n");
	printf("***    3. search  4. modify  ***\n");
	printf("***    5. show    6. sort    ***\n");
	printf("***    0. exit               ***\n");
	printf("********************************\n");
}



int main()
{

	int input = 0;
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("���������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Add(&con);
			break;
		case DEL:
			Del(&con);
			break;
		case SEARCH:
			Search(&con);
			break;
		case MODIFY:
			Modify(&con);
			break;
		case SHOW:
			Show(&con);
			break;
		case SORT:
			Sort(&con);
			break;
		case EXIT:
			Save(&con);
			Destroy(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}