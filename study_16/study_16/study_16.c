#define _CRT_SECURE_NO_WARNINGS 1

//int val = 20;//在栈空间上开辟四个字节
//char arr[10] = { 0 };//在栈空间上开辟10个字节的连续空间


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int* ptr = NULL;
//	ptr = (int*)malloc(num * sizeof(int));
//	if (NULL != ptr)//判断ptr指针是否为空
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);//释放ptr所指向的动态内存
//	ptr = NULL;//是否有必要？
//	return 0;
//}


//void* calloc(size_t num, size_t size);


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//		使用空间
//		
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//void* realloc(void* ptr, size_t size);


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* ptr = (int*)malloc(100);
//	if (ptr != NULL)
//	{
//		//业务处理
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//	//扩展容量
//	//代码1
//	ptr = (int*)realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)
//	//代码2
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//业务处理
//	free(ptr);
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}

//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}

//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//ok?
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);
//}


//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//#include <stdlib.h>
//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}




//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//    strcpy(str, "hello");
//    printf(str);
//    free(p);
//    p = NULL;
//}
//int main()
//{
//    Test();
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//    strcpy(str, "hello");
//    printf(str);
//    free(p);
//    p = NULL;
//}
//int main()
//{
//    Test();
//    return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}

//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;

//typedef struct st_type
//{
//	int i;
//	int a[];//柔性数组成员
//}type_a;




//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//printf("%d\n", sizeof(type_a));//输出的是4


//#include <stdlib.h>
//#include <stdio.h>
//
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//
//int main()
//{
//	int i = 0;
//	type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
//
//	p->i = 100;
//	for (i = 0; i < 100; i++)
//	{
//		p->a[i] = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


////代码1
//int i = 0;
//type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
////业务处理
//p->i = 100;
//for (i = 0; i < 100; i++)
//{
//    p->a[i] = i;
//}
//free(p);
//
////代码2
//typedef struct st_type
//{
//    int i;
//    int* p_a;
//}type_a;
//type_a* p = malloc(sizeof(type_a));
//p->i = 100;
//p->p_a = (int*)malloc(p->i * sizeof(int));
////业务处理
//for (i = 0; i < 100; i++)
//{
//    p->p_a[i] = i;
//}
////释放空间
//free(p->p_a);
//p->p_a = NULL;
//free(p);
//p = NULL;
