#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 40

#define DEFAULT_SZ 3    //默认大小
#define INC_SZ 5    //扩容大小

//描述一个人的信息
typedef struct PeopleInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeopleInfo;

////静态版本
////通讯录
//typedef struct Contact
//{
//	PeopleInfo data[MAX];//定义数组用来存放联系人信息
//	int sz;//记录通讯录中有效信息的个数
//}Contact;

//动态版本
//通讯录
typedef struct Contact
{
	PeopleInfo* data;//data指向存放数据的空间
	int sz;//记录通讯录中有效信息的个数
	int capacity;//记录通讯录当前的容量
}Contact;

//初始化通讯录
void InitContact(Contact* pc);
//添加联系人信息
void Add(Contact* pc);
//删除联系人信息
void Del(Contact* pc);
//显示联系人信息
void Show(Contact* pc);
//查找联系人信息
void Search(const Contact* pc);
//修改联系人信息
void Modify(Contact* pc);
//按名字排序通讯录
void Sort(Contact* pc);
//销毁通讯录
void Destroy(Contact* pc);
//保存数据到文件
void Save(Contact* pc);

