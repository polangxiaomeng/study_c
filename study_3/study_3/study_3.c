#define _CRT_SECURE_NO_WARNINGS 1


//1. 计算n的阶乘。
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//
//}
//





//2.计算 1!+2!+3!+……+10!
//第一种
// #include<stdio.h>
//
//int main()
//{
//
//	int n = 0;
//	//输入
//	//计算n的阶乘
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		//计算n的阶乘
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
// 第二种
//#include<stdio.h>
//
//int main()
//{
//
//	int n = 0;
//	//输入
//	//计算n的阶乘
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//3.在一个有序数组中查找具体的某个数字n。
//第一种（遍历数组，不管素组有没有序，都可用该法，但效率低）
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//k是要查找的数字
//	int i = 0;
//	int flag = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			flag = 1;
//			printf("找到了，下表是：%d\n", i);
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("找不到\n");
//	return 0;
//}
//第二种（折半查找法，前提是有序数组）
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//k是要查找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			flag = 1;
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("没找到");
//	}
//	return 0;
//}





//4.编写代码，演示多个字符从两端移动，向中间汇聚。

//#include <stdio.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "I'm going to get better";
//	char arr2[] = "***********************";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = sz - 2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		right--;
//		left++;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}





//5.编写代码实现，模拟用户登录情景，并且只能登录三次。
//（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。)
//#include<stdio.h>
//#include<string.h>
// 
//int main()
//{
//	char input[20] = {0};
//	 char password[20] = "123456";
//	int flag = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", &input);
//		if (strcmp(input, password) == 0)
//		{
//			printf("密码正确！\n");
//			flag = 1;
//		}
//		else
//			printf("密码错误！\n");
//		if (flag)
//			break;
//	}
//	if (flag == 0)
//		printf("三次密码均错误，退出程序");
//	return 0;
//}




//猜数字游戏
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play      **********\n");
//	printf("*********** 0.exit      **********\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
