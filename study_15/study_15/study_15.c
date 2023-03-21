#define _CRT_SECURE_NO_WARNINGS 1
//struct tag
//{
//	member - list;
//}variable - list;

//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//}; //分号不能丢

//struct
//{
//	int a;
//	char c;
//	double d;
//}s1, s2;

//struct
//{
//	int a;
//	char c;
//	double d;
//}s1, s2;
//
//struct
//{
//	int a;
//	char c;
//	double d;
//}*ps;
//
//int main()
//{
//	ps = &s1;//指针类型不兼容
//	return 0;
//}
//编译器会把上面的两个声明当成完全不同的两个类型。
//所以是非法的。

//struct Node
//{
//	int data;
//	struct Node next;
//};

//struct Node
//{
//	int data;
//	struct Node* next;
//};

//typedef struct
//{
//	int data;
//	Node* next;
//}Node;


//struct Point
//{
//	int x;
//	int y;
//}p1; //声明类型的同时定义变量p1
//struct Point p2; //定义结构体变量p2
////初始化：定义变量的同时赋初值。
//struct Point p3 = { x, y };
//struct Stu //类型声明
//{
//	char name[15];//名字
//	int age; //年龄
//};
//struct Stu s = { "zhangsan", 20 };//初始化
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //结构体嵌套初始化
//struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化

//#include<stdio.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d %d %d %d", sizeof(struct S1), sizeof(struct S2), sizeof(struct S3), sizeof(struct S4));
//	return 0;
//}

////例如：
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};


//#include <stdio.h>
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	//输出的结果是什么？
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}


//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); //传结构体
//	print2(&s); //传地址
//	return 0;
//}


//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//struct S s = { 0 };
//int main()
//{
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}


//enum Tag
//{
//    con1,
//    con2,
//    ...
//    con3
//};

////星期
//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
////性别
//enum Sex
//{
//	FAMALE,
//	MALE,
//	SECRET
//};
////颜色
//enum Color
//{
//	RED = 9,
//	GREEN = 4,
//	BLUE = 6
//};
//
//
//
//
//
//#include <stdio.h>
//int main()
//{
//	printf("%d\n%d\n%d\n", RED, GREEN, BLUE);
//	return 0;
//}



//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	//赋值1
//	enum Color c = RED;
//	//赋值2
//	enum Color c = 0;
//}



///*
//* 计算器
//* 使用枚举常量
//* */
//enum Option {
//	EXIT,//0
//	ADD,//1
//	SUB,//2
//	MUL,//3
//	DIV,//4
//};
//
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//void Calc(int (*pf)(int, int)) {
//	int a = 0;
//	int b = 0;
//	printf("请输入操作数:>");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", pf(a, b));
//}
//
//void menu() {
//	printf("*************************\n");
//	printf("**** 1.ADD     2.SUB ****\n");
//	printf("**** 3.MUL *** 4.DIV ****\n");
//	printf("*******  0.exit  ********\n");
//	printf("*************************\n");
//}
//int main()
//{
//	int input = 0;
//
//	do {
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input) {
//		case ADD:
//			Calc(Add);
//			break;
//		case SUB:
//			Calc(Sub);
//			break;
//		case MUL:
//			Calc(Mul);
//			break;
//		case DIV:
//			Calc(Div);
//			break;
//		case EXIT:
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//#include<stdio.h>
//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum sex s = FEMALE;
//	printf("%d\n", sizeof(enum sex));
//	printf("%d\n", sizeof(MALE));
//	return 0;
//}



//union Un
//{
//	char c;//1
//	int i;//4
//};
//int main()
//{
//	union Un u = { 0 };
//	printf("%d\n", sizeof(u));
//	return 0;
//}

#include <stdio.h>
////联合类型的声明
//union Un
//{
//	char c;
//	int i;
//};
////联合变量的定义
//union Un un;
////计算连个变量的大小
//printf("%d\n", sizeof(un));

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un un;
//	printf("%p\n", &un);
//	printf("%p\n", &un.c);
//	printf("%p\n", &un.i);
//	return 0;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	if (check_sys() == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}


//union un
//{
//	int a;//对齐数为4，默认对齐数为8，取较小值，即4
//	char arr[5];//最大成员的大小为5，对齐数为1（拿char来算，而不是拿整个数组所占的内存空间来算），默认对齐数为8，取较小值1
//	//所以联合体的最大对齐数为4，所以union un的内存空间的大小必须是4的倍数，同时还必须大于5，所以空间大小为8个字节
//};