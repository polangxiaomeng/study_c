#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a = 10;//���ڴ��п���һ��ռ�
//	int* p = &a;//�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&��������
//	//a����ռ��4���ֽڵĿռ䣬�����ǽ�a��4���ֽڵĵ�һ���ֽڵĵ�ַ�����p�����У�p����һ��ָ֮�������
//	return 0;
//}


//int num = 10;
//p = &num;


//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//	*pi = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*(p++) = i;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//char* test()
//{
//	char a[] = "hahaha";
//	return a;
//}
//
//int main()
//{
//	char* p = test();
//	printf("%s", p);
//}


//#include <stdio.h>
//int main()
//{
//	int* p = NULL;
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}

//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//ָ��+-������ָ��Ĺ�ϵ����
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}

//#include<stdio.h>
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//
//int main()
//{
//	printf("%d", my_strlen("hello world"));
//	return 0;
//}


//for (vp = &values[N_VALUES]; vp > &values[0];)
//{
//	*--vp = 0;
//}


//for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//{
//	*vp = 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//int* p = arr;//p��ŵ���������Ԫ�صĵ�ַ

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr; //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int* p = arr; //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int b = 20;
//*ppa = &b;//�ȼ��� pa = &b;


//int b = 20;
//*ppa = &b;//�ȼ��� pa = &b;


//** ppa = 30;
////�ȼ���*pa = 30;
////�ȼ���a = 30;
//int arr1[5];
//char arr2[6];



//int arr1[5];
//char arr2[6];
int* arr3[5];//��ʲô��