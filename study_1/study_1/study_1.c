#define _CRT_SECURE_NO_WARNINGS 1

//��ʶC����

//������һ��C���Դ���
//#include <stdio.h>
//int main()
//{
//	printf("Hello world\n");	//\n��ʾ����
//	return 0;
//}
//���ͣ�
//main�����ǳ�������
//һ��������main�������ҽ���һ��
//printf��һ���⺯����ʹ�õ�ʱ����Ҫ����ͷ�ļ� - stdio.h
//  std - ��׼
//  input - ����  scanf
//  output - ���



//%d - ��ӡ10���Ƶ�����
//sizeof - ������ռ�ڴ�ռ�Ĵ�С
//���������͵Ĵ�С
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





//%f - �Ǵ�ӡfloat���͵ĸ�����
//%lf - �Ǵ�ӡdouble���͵ĸ�����
//int main()
//{
//	//int���Ͷ������age���һ���˵�����
//	int age = 10;
//	printf("%d\n", age);
//
//  //float����double���Ͷ������salary���һ���˵�н��
//	//float salary = 10000.0f;
//	double salary = 10000.0;
//	printf("%.1lf\n", salary);
//
//	return 0;
//}


//�����Ķ��巽��
//int age = 150;
//float weight = 45.5f;
//char ch = 'w';


//���ֲ�������ȫ�ֱ���ͬ����ʱ�򣬾ֲ���������ʹ�á�
//#include <stdio.h>
//int global = 2022;//ȫ�ֱ���
//int main()
//{
//	int global = 2023;//�ֲ�����
//	printf("global = %d\n", global);
//	return 0;
//}



//������ʹ��
//#include <stdio.h>
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("��������������:>");
//    scanf("%d %d", &num1, &num2);
//    sum = num1 + num2;
//    printf("sum = %d\n", sum);//���
//    return 0;
//
//}



//����������
//#include <stdio.h>
////����
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////�����е�MALE,FEMALE,SECRET��ö�ٳ���
//int main()
//{
//	//���泣����ʾ
//	3.14;//���泣��
//	1000;//���泣��
//
//	//const ���εĳ�����
//	const float pai = 3.14f; //�����pai��const���εĳ�����
//	//pai = 5.14;//errow const���εı����ǲ���ֱ���޸ĵģ�
//
//	//#define�ı�ʶ������ ��ʾ
//	#define MAX 100
//	printf("max = %d\n", MAX);
//
//	//ö�ٳ�����ʾ
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	//ע��ö�ٳ�����Ĭ���Ǵ�0��ʼ���������µ���1��
//	return 0;
//}



//#include <stdio.h>
////������룬��ӡ�����ʲô��Ϊʲô����ͻ��'\0'����Ҫ�ԣ�
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
//ע���ַ����Ľ�����־��һ�� \0 ��ת���ַ����ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־���������ַ������ݡ�



//����Ҫ����Ļ�ϴ�ӡһ��Ŀ¼�� c:\code\test.c
//���Ǹ����д���룿
//#include <stdio.h>
//int main()
//{
//	printf("c:\code\test.c\n");
//	return 0;
//}




//ת���ַ�����
//#include <stdio.h>
//int main()
//{
//	//����1������Ļ�ϴ�ӡһ��������'����ô����
//	//����2������Ļ�ϴ�ӡһ���ַ������ַ�����������һ��˫���š�����ô����
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}
// 
// 
//�������ʲô��
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// \62��������һ��ת���ַ�
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}