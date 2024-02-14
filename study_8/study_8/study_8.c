#define _CRT_SECURE_NO_WARNINGS 1


//struct tag
//{
//	member - list;
//}variable - list;


//typedef struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//}Stu;//分号不能丢


//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//}p1; //声明类型的同时定义变量p1
//struct Point p2; //定义结构体变量p2
////初始化：定义变量的同时赋初值。
//struct Point p3 = { 10, 20 };
//int main()
//{
//	struct Point p4;
//	return 0;
//}
//
//
//struct Stu //类型声明
//{
//	char name[15];//名字
//	int age; //年龄
//};
//struct Stu s = { .name  = "zhangsan", .age = 20 };//初始化
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //结构体嵌套初始化
//struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化


//struct S s;
//strcpy(s.name, "zhangsan");//使用.访问name成员
//s.age = 20;//使用.访问age成员

//#include <stdio.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void print(struct Stu* ps)
//{
//	printf("name = %s age = %d\n", (*ps).name, (*ps).age);
//	//使用结构体指针访问指向对象的成员
//	printf("name = %s age = %d\n", ps->name, ps->age);
//}
//int main()
//{
//	struct Stu s = { "zhangsan", 20 };
//	print(&s);//结构体地址传参
//	return 0;
//}


struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//结构体传参
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s); //传结构体
	print2(&s); //传地址
	return 0;
}