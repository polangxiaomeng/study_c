#define _CRT_SECURE_NO_WARNINGS 1
//struct tag
//{
//	member - list;
//}variable - list;

//struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[20];//ѧ��
//}; //�ֺŲ��ܶ�

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
//	ps = &s1;//ָ�����Ͳ�����
//	return 0;
//}
//����������������������������ȫ��ͬ���������͡�
//�����ǷǷ��ġ�

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
//}p1; //�������͵�ͬʱ�������p1
//struct Point p2; //����ṹ�����p2
////��ʼ�������������ͬʱ����ֵ��
//struct Point p3 = { x, y };
//struct Stu //��������
//{
//	char name[15];//����
//	int age; //����
//};
//struct Stu s = { "zhangsan", 20 };//��ʼ��
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //�ṹ��Ƕ�׳�ʼ��
//struct Node n2 = { 20, {5, 6}, NULL };//�ṹ��Ƕ�׳�ʼ��

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

////���磺
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
//#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	//����Ľ����ʲô��
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
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); //���ṹ��
//	print2(&s); //����ַ
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

////����
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
////�Ա�
//enum Sex
//{
//	FAMALE,
//	MALE,
//	SECRET
//};
////��ɫ
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
//	//��ֵ1
//	enum Color c = RED;
//	//��ֵ2
//	enum Color c = 0;
//}



///*
//* ������
//* ʹ��ö�ٳ���
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
//	printf("�����������:>");
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
//		printf("��ѡ��\n");
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
//			printf("ѡ�����\n");
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
////�������͵�����
//union Un
//{
//	char c;
//	int i;
//};
////���ϱ����Ķ���
//union Un un;
////�������������Ĵ�С
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
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
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
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
//	}
//	return 0;
//}


//union un
//{
//	int a;//������Ϊ4��Ĭ�϶�����Ϊ8��ȡ��Сֵ����4
//	char arr[5];//����Ա�Ĵ�СΪ5��������Ϊ1����char���㣬������������������ռ���ڴ�ռ����㣩��Ĭ�϶�����Ϊ8��ȡ��Сֵ1
//	//�������������������Ϊ4������union un���ڴ�ռ�Ĵ�С������4�ı�����ͬʱ���������5�����Կռ��СΪ8���ֽ�
//};