#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//数组的不完全初始化
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
//	int i = 0;//做下标
//	for (i = 0; i < 10; i++)//这里写10，好不好？
//	{
//		arr[i] = i;
//	}
//	//输出数组的内容
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


////数组创建
//int arr[3][4];
//char arr[3][5];
//double arr[2][4];


////数组初始化
//int arr[3][4] = { 1,2,3,4 };
//int arr[3][4] = { {1,2},{4,5} };
//int arr[][4] = { {2,3},{4,5} };//二维数组如果有初始化，行可以省略，列不能省略




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
//		printf("%d\n", arr[i]);//当i等于10的时候，越界访问了
//	}
//	return 0;
//}





////方法1：
//#include <stdio.h>
//void bubble_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//这样对吗？
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
//	bubble_sort(arr);//是否可以正常排序？
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2，3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	//输出结果
//	return 0;
//}





////方法2
//void bubble_sort(int arr[], int sz)//参数接收数组元素个数
//{
//	//代码同上面函数
//}
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//是否可以正常排序？
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}