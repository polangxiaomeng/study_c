#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//void new_line()
//{
//	printf("good\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "world"));
//	printf("%d\n", ret);
//	return 0;
//}
// 
// 
//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//�����ɶ��
//	//ע��printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
//	return 0;
//}



//#include <stdio.h>
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}


//#include <stdio.h>
//int Strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + Strlen(str + 1);
//}
//int main()
//{
//	char* p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}





//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}



//int count = 0;//ȫ�ֱ���
//int fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}




////��n�Ľ׳�
//int factorial(int n)
//{
//	int result = 1;
//	while (n > 1)
//	{
//		result *= n;
//		n -= 1;
//	}
//	return result;
//}
////���n��쳲�������
//int fib(int n)
//{
//	int result;
//	int pre_result;
//	int next_older_result;
//	result = pre_result = 1;
//	while (n > 2)
//	{
//		n -= 1;
//		next_older_result = pre_result;
//		pre_result = result;
//		result = pre_result + next_older_result;
//	}
//	return result;
//}


//int isLeapYear(int i)
//{
//    if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))//�ж�������������ܱ�4�������Ҳ��ܱ�100���������ܱ�400����
//        return 1;//�ж�������
//    else
//        return 0;//�жϲ�������
//}
//
//int isPrime(unsigned int number)
//{
//	if (number < 2)
//		return 0;
//
//	unsigned int div = 2;
//	while (div * div <= number)
//	{
//		if (0 == number % div)
//			return 0;
//		div++;
//	}
//	return 1;
//}
//
//
//int binary_search(int* arr, int lenth, int key)
//{
//    int left = 0;
//    int right = lenth - 1;
//    int mid = 0;
//
//    while (left <= right)
//    {
//        mid = left + ((right - left) >> 1);//Ч�ʸ���û���������
//        if (key > arr[mid])
//        {
//            left = mid + 1;
//        }
//        else if (key < arr[mid])
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;//�Ҳ�������-1
//}
// 
// 
//#include<stdio.h>
//
//
//int NumAdd(int *num)
//{
//	(*num)++;
//}
//
//int main()
//{
//	int num = 0;
//	while (num < 10)
//	{
//		NumAdd(&num);
//		printf("%d ", num);
//	}
//	return 0;
//}