#define _CRT_SECURE_NO_WARNINGS 1



//struct _iobuf {
//	char* _ptr;
//	int _cnt;
//	char* _base;
//	int _flag;
//	int _file;
//	int _charbuf;
//	int _bufsiz;
//	char* _tmpfname;
//};
//
//typedef struct _iobuf FILE;


////���ļ�
//FILE* fopen(const char* filename, const char* mode);
////�ر��ļ�
//int fclose(FILE* stream);


///* fopen fclose example */
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//���ļ�
//	pFile = fopen("myfile.txt", "w");
//	//�ļ�����
//	if (pFile != NULL)
//	{
//		fputs("fopen example", pFile);
//		//�ر��ļ�
//		fclose(pFile);
//	}
//	return 0;
//}


////����һ������
//char arr[10] = { 0 };
//fgets(arr, 5, pf);    //������ȡ�����ݷ���arr��
//printf("%s\n", arr);

//#include<stdio.h>
//
//typedef struct S
//{
//	char name[10];
//	int age;
//
//}Peo;
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//
//	if (pf != NULL)
//	{
//		Peo p = { "zhangsan", 18 };
//		fprintf(pf, "%s %d\n", p.name, p.age);
//
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}



//#include<stdio.h>
//
//typedef struct S
//{
//	char name[10];
//	int age;
//
//}Peo;
//
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf != NULL)
//	{
//		//��ȡ�ļ�
//		Peo p = { 0 };
//		fscanf(pf, "%s %d", p.name, &p.age);
//		printf("%s %d", p.name, p.age);
//		//�ر��ļ�
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//typedef struct S
//{
//	char name[10];
//	int age;
//
//}Peo;
//
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "wb+");
//	if (pf != NULL)
//	{
//		//д���ļ�
//		Peo p = { "lisi", 19 };
//		fwrite(&p, sizeof(Peo), 1, pf);
//		//�ر��ļ�
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//typedef struct S
//{
//	char name[10];
//	int age;
//
//}Peo;
//
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "rb+");
//	if (pf != NULL)
//	{
//		//��ȡ�ļ�
//		Peo p = { 0 };
//		fread(&p, sizeof(Peo), 1, pf);
//		printf("%s %d\n", p.name, p.age);
//		//�ر��ļ�
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//typedef struct S
//{
//	char name[10];
//	int age;
//
//}Peo;
//
//int main()
//{
//	//����һ���ַ���
//	char buffer[] = { "zhansan 19" };
//	//����һ���ṹ������ֵ
//	Peo p = { 0 };
//	sscanf(buffer, "%s %d", p.name, &p.age);
//	printf("%s %d", p.name, p.age);    //zhangsan 19
//	return 0;
//}

//#include<stdio.h>
//
//typedef struct S
//{
//	char name[10];
//	int age;
//
//}Peo;
//
//int main()
//{
//	//����һ���ṹ
//	Peo p = { "zhangsan",19 };
//	//����һ���ַ���
//	char buffer[50] = { 0 };
//	sprintf(buffer, "%s %d\n", p.name, p.age);
//	printf("%s", buffer);    //zangsan 19
//	return 0;
//}

///* fseek example */
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}


///* ftell example : getting size of a file */
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	long size;
//	pFile = fopen("myfile.txt", "rb");
//	if (pFile == NULL) perror("Error opening file");
//	else
//	{
//		fseek(pFile, 0, SEEK_END); // non-portable
//		size = ftell(pFile);
//		fclose(pFile);
//		printf("Size of myfile.txt: %ld bytes.\n", size);
//	}
//	return 0;
//}

///* rewind example */
//#include <stdio.h>
//int main()
//{
//	int n;
//	FILE* pFile;
//	char buffer[27];
//	pFile = fopen("myfile.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++)
//		fputc(n, pFile);
//	//rewind(pFile);
//	fseek(pFile, 0, SEEK_SET);
//	fread(buffer, 1, 26, pFile);
//	fclose(pFile);
//	buffer[26] = '\0';
//	puts(buffer);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 10000;
//    FILE* pf = fopen("test.txt", "wb");
//    fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int c; // ע�⣺int����char��Ҫ����EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) {
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//}

//#include <stdio.h>
//enum { SIZE = 5 };
//int main()
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
//	fwrite(a, sizeof * a, SIZE, fp); // д double ������
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // �� double ������
//	if (ret_code == SIZE) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else { // error handling
//		if (feof(fp))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(fp)) {
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(fp);
//}


//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//	return 0;
//}