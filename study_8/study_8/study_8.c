#define _CRT_SECURE_NO_WARNINGS 1


//struct tag
//{
//	member - list;
//}variable - list;


//typedef struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[20];//ѧ��
//}Stu;//�ֺŲ��ܶ�


//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//}p1; //�������͵�ͬʱ�������p1
//struct Point p2; //����ṹ�����p2
////��ʼ�������������ͬʱ����ֵ��
//struct Point p3 = { 10, 20 };
//int main()
//{
//	struct Point p4;
//	return 0;
//}
//
//
//struct Stu //��������
//{
//	char name[15];//����
//	int age; //����
//};
//struct Stu s = { .name  = "zhangsan", .age = 20 };//��ʼ��
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //�ṹ��Ƕ�׳�ʼ��
//struct Node n2 = { 20, {5, 6}, NULL };//�ṹ��Ƕ�׳�ʼ��


//struct S s;
//strcpy(s.name, "zhangsan");//ʹ��.����name��Ա
//s.age = 20;//ʹ��.����age��Ա

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
//	//ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
//	printf("name = %s age = %d\n", ps->name, ps->age);
//}
//int main()
//{
//	struct Stu s = { "zhangsan", 20 };
//	print(&s);//�ṹ���ַ����
//	return 0;
//}


struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//�ṹ�崫��
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s); //���ṹ��
	print2(&s); //����ַ
	return 0;
}