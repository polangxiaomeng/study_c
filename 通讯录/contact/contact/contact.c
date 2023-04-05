#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

////��̬�汾
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
//		printf("ͨѶ¼�������޷�����������Ϣ\n");
//		return;
//	}
//	printf("����������:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("������绰��:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("������סַ:>");
//	scanf("%s", pc->data[pc->sz].addr);
//	pc->sz++;
//	printf("��ӳɹ�\n");
//}

////��̬��
//void InitContact(Contact* pc)
//{
//	pc->data = (PeopleInfo*)calloc(DEFAULT_SZ, sizeof(PeopleInfo));
//	if (pc->data == NULL)
//	{
//		perror("��ʼ��ʧ��");
//		return;
//	}
//	pc->sz = 0;
//	pc->capacity = DEFAULT_SZ;
//}

static int CheckCapacity(Contact* pc);

void LoadContact(Contact* pc)
{
	//���ļ�
	FILE* pf = fopen("test.dat", "rb");
	if (NULL == pf)
	{
		perror("LoadContact::fopen");
		return;
	}
	//���ļ�
	PeopleInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeopleInfo), 1, pf))
	{
		CheckCapacity(pc);
		pc->data[pc->sz] = tmp;
		(pc->sz)++;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

//�ļ���
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
	//�����ļ�����Ϣ��ͨѶ¼
	LoadContact(pc);
}

void Destroy(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
	printf("�ͷ��ڴ�ɹ�\n");
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
			printf("�ڴ治�㣬ͨѶ¼����ʧ��\n");
			return -1;
		}
		printf("ͨѶ¼���ݳɹ�����ǰ����Ϊ%d\n", pc->capacity);
	}
	return 1;
}

void Add(Contact* pc)
{
	if (CheckCapacity(pc) == -1)
	{
		return;
	}
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("������绰��:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("������סַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("��ӳɹ�\n");
}

void Show(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("%-20s%-10s%-20s%-20s%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-20s%-10s%-20d%-20s%-30s\n",
			pc->data[i].name, pc->data[i].sex,
			pc->data[i].age, pc->data[i].tele, pc->data[i].addr);
	}
}

//������ϵ������
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
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	ret = Find(pc, name);
	if (ret == -1)
	{
		printf("ɾ��ʧ�ܣ�����ϵ�˲�����\n");
		return;
	}
	else
	{
		for (i = ret; i < pc->sz-1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}


void Search(const Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	int ret = 0;
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	ret = Find(pc, name);
	if (ret == -1)
	{
		printf("����ϵ�˲�����\n");
		return;
	}
	else
	{
		printf("%-20s%-10s%-20s%-20s%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-20s%-10s%-20d%-20s%-30s\n", pc->data[ret].name, pc->data[ret].sex,
			pc->data[ret].age, pc->data[ret].tele, pc->data[ret].addr);
	}
}

void Modify(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	int ret = 0;
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	ret = Find(pc, name);
	if (ret == -1)
	{
		printf("����ϵ�˲�����\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[ret].name);
		printf("�������Ա�:>");
		scanf("%s", pc->data[ret].sex);
		printf("����������:>");
		scanf("%d", &(pc->data[ret].age));
		printf("������绰��:>");
		scanf("%s", pc->data[ret].tele);
		printf("������סַ:>");
		scanf("%s", pc->data[ret].addr);
		printf("�޸ĳɹ�\n");
	}
}

int compare_name(const void* p1, const void* p2)
{
	return strcmp(((PeopleInfo*)p1)->name, ((PeopleInfo*)p2)->name);
}

void Sort(Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(PeopleInfo), compare_name);
	printf("����ɹ�\n");
}


void Save(Contact* pc)
{
	//���ļ�
	FILE* pf = fopen("test.dat", "wb");
	if (NULL == pf)
	{
		perror("Save::fopen");
		return;
	}
	//д�ļ�
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite((pc->data) + i, sizeof(PeopleInfo), 1, pf);
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	printf("����ɹ�\n");
}