#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __FUNCTION__);
//
//	return 0;
//}


//#define MAX 1000
//#define reg register //Ϊ register����ؼ��֣�����һ����̵�����
//#define do_forever for(;;) //�ø�����ķ������滻һ��ʵ��
//#define CASE break;case //��дcase����ʱ���Զ��� breakд�ϡ�
//// �������� stuff���������Էֳɼ���д���������һ���⣬ÿ�еĺ��涼��һ����б��(���з�)��
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//date:%s\ttime:%s\n" ,\
//__FILE__,__LINE__ , \
//__DATE__,__TIME__ )


//#include <stdio.h>
//#define SQUARE(x) x*x
//
//int main()
//{
//	int ret = SQUARE(1+3);
//	printf("%d\n", ret);
//	return 0;
//}


//#define FAC(x) (x)*FAC(x-1)//error

//#include <stdio.h>
//#define M "abcd"
//
//int main()
//{
//	printf("%s\n", M);//M���ᱻ����
//	return 0;
//}

//char* p = "hello ""world\n";
//printf("hello"" world\n");
//printf("%s", p);

//#define ADD_TO_SUM(num, value) \
//sum##num += value
//int main()
//{
//	ADD_TO_SUM(5, 10);//�����ǣ���sum5����10.
//	return 0;
//}





//#include <stdio.h>
//int main()
//{
//	int array[ARRAY_SIZE];
//	int i = 0;
//	for (i = 0; i < ARRAY_SIZE; i++)
//	{
//		array[i] = i;
//	}
//	for (i = 0; i < ARRAY_SIZE; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		#ifdef __DEBUG__
//		printf("%d\n", arr[i]);//Ϊ�˹۲������Ƿ�ֵ�ɹ���
//		#endif //__DEBUG__
//	}
//	return 0;
//}


//1.
//#if �������ʽ
////...
//#endif
////�������ʽ��Ԥ��������ֵ��
//�磺
//#define __DEBUG__ 1
//#if __DEBUG__
////..
//#endif
//2.�����֧����������
//#if �������ʽ
////...
//#elif �������ʽ
////...
//#else
////...
//#endif
//3.�ж��Ƿ񱻶���
//#if defined(symbol)
//#ifdef symbol
//#if !defined(symbol)
//#ifndef symbol
//4.Ƕ��ָ��
//#if defined(OS_UNIX)
//	#ifdef OPTION1
//		unix_version_option1();
//	#endif
//	#ifdef OPTION2
//		unix_version_option2();
//	#endif
//#elif defined(OS_MSDOS)
//	#ifdef OPTION2
//		msdos_version_option2();
//	#endif
//#endif


//#ifndef __TEST_H__
//#define __TEST_H__
////ͷ�ļ�������
//#endif //__TEST_H__
//#pragma once


//#include <stdio.h>
//int i = 10;
//#define PRINT(FORMAT, VALUE)\
//printf("the value of " #VALUE "is "FORMAT "\n", VALUE)
//int main()
//{
//	PRINT("%d", i + 3);//������ʲôЧ����
//	return 0;
//}