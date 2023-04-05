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
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请输入操作选项:>");
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
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}