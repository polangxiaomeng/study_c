#define _CRT_SECURE_NO_WARNINGS 1


//1. ����n�Ľ׳ˡ�
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	//����
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





//2.���� 1!+2!+3!+����+10!
//��һ��
// #include<stdio.h>
//
//int main()
//{
//
//	int n = 0;
//	//����
//	//����n�Ľ׳�
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		//����n�Ľ׳�
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
// �ڶ���
//#include<stdio.h>
//
//int main()
//{
//
//	int n = 0;
//	//����
//	//����n�Ľ׳�
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




//3.��һ�����������в��Ҿ����ĳ������n��
//��һ�֣��������飬����������û���򣬶����ø÷�����Ч�ʵͣ�
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//k��Ҫ���ҵ�����
//	int i = 0;
//	int flag = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			flag = 1;
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("�Ҳ���\n");
//	return 0;
//}
//�ڶ��֣��۰���ҷ���ǰ�����������飩
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//k��Ҫ���ҵ�����
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
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("û�ҵ�");
//	}
//	return 0;
//}





//4.��д���룬��ʾ����ַ��������ƶ������м��ۡ�

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





//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����)
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
//		printf("���������룺");
//		scanf("%s", &input);
//		if (strcmp(input, password) == 0)
//		{
//			printf("������ȷ��\n");
//			flag = 1;
//		}
//		else
//			printf("�������\n");
//		if (flag)
//			break;
//	}
//	if (flag == 0)
//		printf("��������������˳�����");
//	return 0;
//}




//��������Ϸ
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
//		printf("������µ�����>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����,����������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
