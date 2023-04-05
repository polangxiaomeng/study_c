#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 40

#define DEFAULT_SZ 3    //Ĭ�ϴ�С
#define INC_SZ 5    //���ݴ�С

//����һ���˵���Ϣ
typedef struct PeopleInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeopleInfo;

////��̬�汾
////ͨѶ¼
//typedef struct Contact
//{
//	PeopleInfo data[MAX];//�����������������ϵ����Ϣ
//	int sz;//��¼ͨѶ¼����Ч��Ϣ�ĸ���
//}Contact;

//��̬�汾
//ͨѶ¼
typedef struct Contact
{
	PeopleInfo* data;//dataָ�������ݵĿռ�
	int sz;//��¼ͨѶ¼����Ч��Ϣ�ĸ���
	int capacity;//��¼ͨѶ¼��ǰ������
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);
//�����ϵ����Ϣ
void Add(Contact* pc);
//ɾ����ϵ����Ϣ
void Del(Contact* pc);
//��ʾ��ϵ����Ϣ
void Show(Contact* pc);
//������ϵ����Ϣ
void Search(const Contact* pc);
//�޸���ϵ����Ϣ
void Modify(Contact* pc);
//����������ͨѶ¼
void Sort(Contact* pc);
//����ͨѶ¼
void Destroy(Contact* pc);
//�������ݵ��ļ�
void Save(Contact* pc);

