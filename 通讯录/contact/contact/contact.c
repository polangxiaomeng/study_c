#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

////静态版本
//void InitContact(Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}
//
//void Add(Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满，无法继续填入信息\n");
//		return;
//	}
//	printf("请输入姓名:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("请输入性别:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入年龄:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("请输入电话号:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("请输入住址:>");
//	scanf("%s", pc->data[pc->sz].addr);
//	pc->sz++;
//	printf("添加成功\n");
//}

////动态版
//void InitContact(Contact* pc)
//{
//	pc->data = (PeopleInfo*)calloc(DEFAULT_SZ, sizeof(PeopleInfo));
//	if (pc->data == NULL)
//	{
//		perror("初始化失败");
//		return;
//	}
//	pc->sz = 0;
//	pc->capacity = DEFAULT_SZ;
//}

static int CheckCapacity(Contact* pc);

void LoadContact(Contact* pc)
{
	//打开文件
	FILE* pf = fopen("test.dat", "rb");
	if (NULL == pf)
	{
		perror("LoadContact::fopen");
		return;
	}
	//读文件
	PeopleInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeopleInfo), 1, pf))
	{
		CheckCapacity(pc);
		pc->data[pc->sz] = tmp;
		(pc->sz)++;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}

//文件版
void InitContact(Contact* pc)
{
	pc->data = (PeopleInfo*)calloc(DEFAULT_SZ, sizeof(PeopleInfo));
	if (pc->data == NULL)
	{
		perror("InitContact::calloc");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	//加载文件的信息到通讯录
	LoadContact(pc);
}

void Destroy(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
	printf("释放内存成功\n");
}


static int CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeopleInfo* str = (PeopleInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeopleInfo));
		if (str != NULL)
		{
			pc->data = str;
			pc->capacity += INC_SZ;
		}
		else
		{
			printf("内存不足，通讯录扩容失败\n");
			return -1;
		}
		printf("通讯录扩容成功，当前容量为%d\n", pc->capacity);
	}
	return 1;
}

void Add(Contact* pc)
{
	if (CheckCapacity(pc) == -1)
	{
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入电话号:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入住址:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("添加成功\n");
}

void Show(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("%-20s%-10s%-20s%-20s%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-20s%-10s%-20d%-20s%-30s\n",
			pc->data[i].name, pc->data[i].sex,
			pc->data[i].age, pc->data[i].tele, pc->data[i].addr);
	}
}

//查找联系人姓名
static int Find(const Contact* pc, const char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void Del(Contact* pc)
{
	char name[MAX_NAME] = {0};
	int ret = 0, i = 0;
	printf("请输入要删除人的姓名:>");
	scanf("%s", name);
	ret = Find(pc, name);
	if (ret == -1)
	{
		printf("删除失败，该联系人不存在\n");
		return;
	}
	else
	{
		for (i = ret; i < pc->sz-1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("删除成功\n");
	}
}


void Search(const Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	int ret = 0;
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	ret = Find(pc, name);
	if (ret == -1)
	{
		printf("该联系人不存在\n");
		return;
	}
	else
	{
		printf("%-20s%-10s%-20s%-20s%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-20s%-10s%-20d%-20s%-30s\n", pc->data[ret].name, pc->data[ret].sex,
			pc->data[ret].age, pc->data[ret].tele, pc->data[ret].addr);
	}
}

void Modify(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	int ret = 0;
	printf("请输入要修改人的姓名:>");
	scanf("%s", name);
	ret = Find(pc, name);
	if (ret == -1)
	{
		printf("该联系人不存在\n");
		return;
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", pc->data[ret].name);
		printf("请输入性别:>");
		scanf("%s", pc->data[ret].sex);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[ret].age));
		printf("请输入电话号:>");
		scanf("%s", pc->data[ret].tele);
		printf("请输入住址:>");
		scanf("%s", pc->data[ret].addr);
		printf("修改成功\n");
	}
}

int compare_name(const void* p1, const void* p2)
{
	return strcmp(((PeopleInfo*)p1)->name, ((PeopleInfo*)p2)->name);
}

void Sort(Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(PeopleInfo), compare_name);
	printf("排序成功\n");
}


void Save(Contact* pc)
{
	//打开文件
	FILE* pf = fopen("test.dat", "wb");
	if (NULL == pf)
	{
		perror("Save::fopen");
		return;
	}
	//写文件
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite((pc->data) + i, sizeof(PeopleInfo), 1, pf);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
	printf("保存成功\n");
}