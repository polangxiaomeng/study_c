#define _CRT_SECURE_NO_WARNINGS 1

//int val = 20;//��ջ�ռ��Ͽ����ĸ��ֽ�
//char arr[10] = { 0 };//��ջ�ռ��Ͽ���10���ֽڵ������ռ�


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int* ptr = NULL;
//	ptr = (int*)malloc(num * sizeof(int));
//	if (NULL != ptr)//�ж�ptrָ���Ƿ�Ϊ��
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);//�ͷ�ptr��ָ��Ķ�̬�ڴ�
//	ptr = NULL;//�Ƿ��б�Ҫ��
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
//		ʹ�ÿռ�
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
//		//ҵ����
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//	//��չ����
//	//����1
//	ptr = (int*)realloc(ptr, 1000);//����������(�������ʧ�ܻ���Σ�)
//	//����2
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//ҵ����
//	free(ptr);
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//���p��ֵ��NULL���ͻ�������
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
//		*(p + i) = i;//��i��10��ʱ��Խ�����
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
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
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
//	int a[0];//���������Ա
//}type_a;

//typedef struct st_type
//{
//	int i;
//	int a[];//���������Ա
//}type_a;




//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;
//printf("%d\n", sizeof(type_a));//�������4


//#include <stdlib.h>
//#include <stdio.h>
//
//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
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


////����1
//int i = 0;
//type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
////ҵ����
//p->i = 100;
//for (i = 0; i < 100; i++)
//{
//    p->a[i] = i;
//}
//free(p);
//
////����2
//typedef struct st_type
//{
//    int i;
//    int* p_a;
//}type_a;
//type_a* p = malloc(sizeof(type_a));
//p->i = 100;
//p->p_a = (int*)malloc(p->i * sizeof(int));
////ҵ����
//for (i = 0; i < 100; i++)
//{
//    p->p_a[i] = i;
//}
////�ͷſռ�
//free(p->p_a);
//p->p_a = NULL;
//free(p);
//p = NULL;
