#define _CRT_SECURE_NO_WARNINGS 1


//接着study_1继续记录初识c语言的代码

//选择语句：
// if语句的语法结构
//if (表达式)
//	语句1;
//else
//	语句2;
////多分支    
//if (表达式1)
//	语句1;
//else if (表达式2)
//	语句2;
//else
//	语句3;
//switch语句的语法结构
//switch (整型表达式)
//{
//case 整形常量表达式:
//	语句;
//}





//循环语句
//while循环
//while (条件表达式)
//{
//	循环语句；
//}
//
//for循环
//for (表达式1; 表达式2; 表达式3)
//{
//	循环语句
//}
//
//do while循环
//do
//{
//	循环语句;
//}while (条件表达式)；




//数组定义
//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个整形数组，最多放10个元素
//数组的下标
//int arr[10] = { 0 };
//如果数组10个元素，下标的范围是0-9
//[]里的数就是数组的下标值
//数组的使用
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}



//操作符
//算数操作符
//



//常见关键字
//auto  break   case  char  const   continue  default  do   double else  enum
//extern float  for   goto  if   int   long  register    return   short  signed
//sizeof   static struct  switch  typedef union  unsigned   void  volatile  while



//define定义常量和宏
////define定义标识符常量
//#define MAX 1000
////define定义宏
//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum = %d\n", sum);
//
//	sum = 10 * ADD(2, 3);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}