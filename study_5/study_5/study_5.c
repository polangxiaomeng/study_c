#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//����Ĳ���ȫ��ʼ��
//	//���������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���������ݸ�ֵ,������ʹ���±������ʵģ��±��0��ʼ�����ԣ�
//	int i = 0;//���±�
//	for (i = 0; i < 10; i++)//����д10���ò��ã�
//	{
//		arr[i] = i;
//	}
//	//������������
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}


////���鴴��
//int arr[3][4];
//char arr[3][5];
//double arr[2][4];


////�����ʼ��
//int arr[3][4] = { 1,2,3,4 };
//int arr[3][4] = { {1,2},{4,5} };
//int arr[][4] = { {2,3},{4,5} };//��ά��������г�ʼ�����п���ʡ�ԣ��в���ʡ��




//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}







//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", arr[i]);//��i����10��ʱ��Խ�������
//	}
//	return 0;
//}





////����1��
//#include <stdio.h>
//void bubble_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	bubble_sort(arr);//�Ƿ������������
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2��3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	//������
//	return 0;
//}





////����2
//void bubble_sort(int arr[], int sz)//������������Ԫ�ظ���
//{
//	//����ͬ���溯��
//}
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//�Ƿ������������
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}