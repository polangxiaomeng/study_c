#define CRT_SECURE_NO_WARNINGS 1


#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//�����ָ��
//���� - �ܹ����һ����ͬ���͵�Ԫ��,����Ĵ�Сȡ���������Ԫ�ظ�����Ԫ������
//ָ�� - ��ַ/ָ����� ,��С��4/8���ֽ�
//���������飬ָ����ָ�룬���߲��ȼ�
//��������������Ԫ�صĵ�ַ�������ַ�Ϳ��Դ����ָ�������
//���ǾͿ���ʹ��ָ������������
//
//������
//�󲿷��������������������Ԫ�صĵ�ַ
//������2�����⣺
//sizeof(������) - ��������ʾ�������飬���������������Ĵ�С
//&������ - ��������ʾ�������飬ȡ����������ĵ�ַ
////
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	//sizeof(a)������������������sizeof�ڲ�������������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(a + 0));//4/8 ���ֽ�
//	//a+0 ��ʵ��������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*a));//4
//	//a��������Ԫ�صĵ�ַ - &a[0]
//	//*a -> *&a[0] -> a[0]
//	printf("%d\n", sizeof(a + 1));//4/8
//	//a��������Ԫ�صĵ�ַ -- int*
//	//a+1 ����1������, �ǵڶ���Ԫ�صĵ�ַ
//	//
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4/8
//	//&a - ȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַѽ���ǵ�ַ��С����4/8�ֽ�
//	//int (*pa)[4] = &a;//int(*)[4]
//	//
//	printf("%d\n", sizeof(*&a));//16
//	//sizeof(a)
//	//int(*)[4]
//	//
//	printf("%d\n", sizeof(&a + 1));//4/8
//	//&a -->  int (*)[4]
//	//&a+1 ����һ������
//
//	printf("%d\n", sizeof(&a[0]));//ȡ����Ԫ�صĵ�ַ 4/8
//	printf("%d\n", sizeof(&a[0] + 1));//�ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}
#include <string.h>


//int main()
//{
//	//�ַ�����
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	//printf("%d\n", strlen(arr));//���ֵ����Ϊ��֪��\0��λ��
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	////printf("%d\n", strlen(*arr));//�Ƿ�����
//	////printf("%d\n", strlen(arr[1]));//'b' - 98 ���ɵ�ַ���βηǷ�����
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
// 
//
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//arr+0��������Ԫ�صĵ�ַ 4/8
//	//printf("%d\n", sizeof(*arr));//*arr����Ԫ�صģ����������Ԫ�صĴ�С 1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//&arr������ĵ�ַ 4/8
//	//printf("%d\n", sizeof(&arr + 1));//&arr + 1����һ�������ĵ�ַ��4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
//
//
//	return 0;
//}

//int main()
//{   
//	//char arr1[] = { 'a','b','c','d','e','f' };
//
//	char arr[] = "abcdef";//[a b c d e f \0]
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	//&arr - char (*)[7]
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//*arr -��������Ԫ�� 1
//	////arr[0]   *(arr+0)
//	////int sz = sizeof(arr)/sizeof(*arr);
//	////int sz = sizeof(arr)/sizeof(arr[0]);
//
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//����ĵ�ַ���ǵ�ַ����4 / 8
//	//printf("%d\n", sizeof(&arr + 1));//4 / 8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 / 8
//
//	return 0;
//}
//
//
//int main()
//{
//	char* p = "abcdef";
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//p+1��'b'�ĵ�ַ 5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//���ֵ
//	//printf("%d\n", strlen(&p + 1));//���ֵ
//	//printf("%d\n", strlen(&p[0] + 1));
//
//
//	//printf("%d\n", sizeof(p));//4 / 8
//	//printf("%d\n", sizeof(p + 1));//'b'�ĵ�ַ��4/8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//*(p+0)--'a' 1
//	//printf("%d\n", sizeof(&p));//
//	//printf("%d\n", sizeof(&p + 1));
//	//printf("%d\n", sizeof(&p[0] + 1));//&p[0]+1��'b'�ĵ�ַ
//
//	return 0;
//}
//
//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//
//	printf("%d\n", sizeof(a));//48 - a�����ά�������������������sizeof�ڲ���������������Ĵ�С
//	printf("%d\n", sizeof(a[0][0]));//��һ�е�һ��Ԫ�أ�4���ֽ�
//	printf("%d\n", sizeof(a[0]));//16
//	//a[0] ��һ�е�����������ʱ��������������sizeof�ڲ���
//	//�����������Ĵ�С����λ���ֽڣ�16
//	printf("%d\n", sizeof(a[0] + 1));//4
//	//a[0]���ǵ�������sizeof�ڲ���a[0]��ʾ����Ԫ�صĵ�ַ������һ�е�һ��Ԫ�صĵ�ַ - &a[0][0]
//	//a[0] + 1 �ǵ�һ�е�2��Ԫ�صĵ�ַ &a[0][1]
//	printf("%d\n", sizeof(*(a[0] + 1)));//a[0][1] ��С�ǣ�4���ֽ�
//	printf("%d\n", sizeof(a + 1));//
//	//a��Ϊ��ά��������������ǵ�������sizeof�ڲ�,���Ա�ʾ��Ԫ�صĵ�ַ
//	//��ά�������Ԫ���ǵ�һ�У������a���ǵ�һ�еĵ�ַ---  int (*)[4]
//	//a+1��������һ�У�ָ���˵ڶ���
//
//	printf("%d\n", sizeof(*(a + 1)));//16
//	//*(a+1)-->a[1]
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//&a[0]�ǵ�һ�еĵ�ַ
//	//&a[0]+1�ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  a[1]
//	printf("%d\n", sizeof(*a));//16 *a - ���ǵ�һ��
//	//*a -- *(a+0) -- a[0]
//	printf("%d\n", sizeof(a[3]));//16
//	
//	//int a = 5;
//	//short s = 11;
//	//printf("%d\n", sizeof(s = a + 2));//2
//	//printf("%d\n", s);//11
//
//	return 0;
//}
//

//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	return 0;
//}
//
//
//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//1048576+1=1048577--> 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}
//