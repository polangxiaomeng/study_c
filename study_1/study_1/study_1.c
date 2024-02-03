#define _CRT_SECURE_NO_WARNINGS 1

//初识C语言

//初见第一个C语言代码
//#include <stdio.h>
//int main()
//{
//	printf("Hello world\n");	//\n表示换行
//	return 0;
//}
//解释：
//main函数是程序的入口
//一个工程中main函数有且仅有一个
//printf是一个库函数，使用的时候需要包含头文件 - stdio.h
//  std - 标准
//  input - 输入  scanf
//  output - 输出



//%d - 打印10进制的整数
//sizeof - 计算所占内存空间的大小
//各数据类型的大小
//#include <stdio.h>

//int main()
//{
//    printf("%d\n", sizeof(char));
//    printf("%d\n", sizeof(short));
//    printf("%d\n", sizeof(int));
//    printf("%d\n", sizeof(long));
//    printf("%d\n", sizeof(long long));
//    printf("%d\n", sizeof(float));
//    printf("%d\n", sizeof(double));
//    printf("%d\n", sizeof(long double));
//
//    return 0;
//}





//%f - 是打印float类型的浮点数
//%lf - 是打印double类型的浮点数
//int main()
//{
//	//int类型定义变量age存放一个人的年龄
//	int age = 10;
//	printf("%d\n", age);
//
//  //float或者double类型定义变量salary存放一个人的薪资
//	//float salary = 10000.0f;
//	double salary = 10000.0;
//	printf("%.1lf\n", salary);
//
//	return 0;
//}


//变量的定义方法
//int age = 150;
//float weight = 45.5f;
//char ch = 'w';


//当局部变量和全局变量同名的时候，局部变量优先使用。
//#include <stdio.h>
//int global = 2022;//全局变量
//int main()
//{
//	int global = 2023;//局部变量
//	printf("global = %d\n", global);
//	return 0;
//}



//变量的使用
//#include <stdio.h>
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("输入两个操作数:>");
//    scanf("%d %d", &num1, &num2);
//    sum = num1 + num2;
//    printf("sum = %d\n", sum);//求和
//    return 0;
//
//}



//常量的运用
//#include <stdio.h>
////举例
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////括号中的MALE,FEMALE,SECRET是枚举常量
//int main()
//{
//	//字面常量演示
//	3.14;//字面常量
//	1000;//字面常量
//
//	//const 修饰的常变量
//	const float pai = 3.14f; //这里的pai是const修饰的常变量
//	//pai = 5.14;//errow const修饰的变量是不能直接修改的！
//
//	//#define的标识符常量 演示
//	#define MAX 100
//	printf("max = %d\n", MAX);
//
//	//枚举常量演示
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	//注：枚举常量的默认是从0开始，依次向下递增1的
//	return 0;
//}



//#include <stdio.h>
////下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
//int main()
//{
//	char arr1[] = "study";
//	char arr2[] = { 's', 't', 'u', 'd', 'y' };
//	char arr3[] = { 's', 't', 'u', 'd', 'y', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
//注：字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的时候 \0 是结束标志，不算作字符串内容。



//我们要在屏幕上打印一个目录： c:\code\test.c
//我们该如何写代码？
//#include <stdio.h>
//int main()
//{
//	printf("c:\code\test.c\n");
//	return 0;
//}




//转义字符运用
//#include <stdio.h>
//int main()
//{
//	//问题1：在屏幕上打印一个单引号'，怎么做？
//	//问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}
// 
// 
//程序输出什么？
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// \62被解析成一个转义字符
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}