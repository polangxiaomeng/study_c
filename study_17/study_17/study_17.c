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


////打开文件
//FILE* fopen(const char* filename, const char* mode);
////关闭文件
//int fclose(FILE* stream);


///* fopen fclose example */
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//打开文件
//	pFile = fopen("myfile.txt", "w");
//	//文件操作
//	if (pFile != NULL)
//	{
//		fputs("fopen example", pFile);
//		//关闭文件
//		fclose(pFile);
//	}
//	return 0;
//}


////定义一个数组
//char arr[10] = { 0 };
//fgets(arr, 5, pf);    //将所读取的数据放入arr中
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
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf != NULL)
//	{
//		//读取文件
//		Peo p = { 0 };
//		fscanf(pf, "%s %d", p.name, &p.age);
//		printf("%s %d", p.name, p.age);
//		//关闭文件
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
//	//打开文件
//	FILE* pf = fopen("test.txt", "wb+");
//	if (pf != NULL)
//	{
//		//写入文件
//		Peo p = { "lisi", 19 };
//		fwrite(&p, sizeof(Peo), 1, pf);
//		//关闭文件
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
//	//打开文件
//	FILE* pf = fopen("test.txt", "rb+");
//	if (pf != NULL)
//	{
//		//读取文件
//		Peo p = { 0 };
//		fread(&p, sizeof(Peo), 1, pf);
//		printf("%s %d\n", p.name, p.age);
//		//关闭文件
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
//	//定义一个字符串
//	char buffer[] = { "zhansan 19" };
//	//定义一个结构但不赋值
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
//	//定义一个结构
//	Peo p = { "zhangsan",19 };
//	//定义一个字符串
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
//    fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) {
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
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
//	FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
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
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}