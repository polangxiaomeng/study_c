#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	char* p = "hello world";
//	printf("%s\n", p);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


///***
//*char *strcpy(dst, src) - copy one string over another
//*
//*Purpose:
//* Copies the string src into the spot specified by
//* dest; assumes enough room.
//*
//*Entry:
//* char * dst - string over which "src" is to be copied
//* const char * src - string to be copied over "dst"
//*
//*Exit:
//* The address of "dst"
//*
//*Exceptions:
//*******************************************************************************/
//char* strcpy(char* dst, const char* src)
//{
//	char* cp = dst;
//	assert(dst && src);
//	while (*cp++ = *src++)
//		; /* Copy src over dst */
//	return(dst);
//}



//#include <stdio.h>
////����1
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test2()
//{
//	//����2
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int* const p = &n;
//	*p = 20; //ok?
//	p = &m; //ok?
//}
//int main()
//{
//	//������cosnt��
//	test1();
//	//����const����*�����
//	test2();
//	//����const����*���ұ�
//	test3();
//	return 0;
//}


//#include <stdio.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str)//�ж��ַ����Ƿ����
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	const char* p = "abcdef";
//	//����
//	int len = my_strlen(p);
//	printf("len = %d\n", len);
//	return 0;
//}