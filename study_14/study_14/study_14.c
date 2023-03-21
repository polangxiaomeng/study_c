#define _CRT_SECURE_NO_WARNINGS 1


//size_t strlen(const char* str);
//#include <stdio.h>
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h> 
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//
//	if ((int)strlen(str2) - (int)strlen(str1) > 0)
//	{
//		printf("str2 > str1\n");
//	}
//	else
//	{
//		printf("srt1 < str2\n");
//	}
//	return 0;
//}
//char* strcpy(char* destination, const char* source);


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20];
//	char arr2[15] = "hello world";
//	printf("%s", strcpy(arr1, arr2));
//	return 0;
//}

//char* strcat(char* destination, const char* source);

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[10] = " world";
//	printf("%s\n", strcat(arr1, arr2));
//	return 0;
//}

//int strcmp(const char* str1, const char* str2);

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	const char arr1[] = "abcd";
//	const char arr2[] = "abz";
//	int ret = strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf("arr1 > arr2\n");
//	}
//	else if (ret == 0)
//	{
//		printf("arr1 = arr2\n");
//	}
//	else
//	{
//		printf("arr1 < arr2\n");
//	}
//	return 0;
//}

//char* strncpy(char* destination, const char* source, size_t num);


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[12] = "hello world";
//	printf("%s", strncpy(arr1, arr2, 10));
//	return 0;
//}


//char* strncat(char* destination, const char* source, size_t num);


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[10] = " world";
//	printf("%s\n", strncat(arr1, arr2, 4));
//	return 0;
//}

//int strncmp(const char* str1, const char* str2, size_t num);

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	const char arr1[] = "abcd";
//	const char arr2[] = "abz";
//	int ret = strncmp(arr1, arr2, 2);
//	if (ret > 0)
//	{
//		printf("arr1 > arr2\n");
//	}
//	else if (ret == 0)
//	{
//		printf("arr1 = arr2\n");
//	}
//	else
//	{
//		printf("arr1 < arr2\n");
//	}
//	return 0;
//}

//char* strstr(const char* str1, const char* str2);

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	const char arr1[] = "abcdefg";
//	const char arr2[] = "cde";
//	char* ret = strstr(arr1, arr2);
//	//从ar1中寻找arr2
//	if (ret == NULL)
//	{
//		printf("找不到该字符串！\n");
//	}
//	else
//	{
//		printf("成功找到该字符串\"%s\"！\n", ret);
//	}
//	return 0;
//}


//char* strtok(char* str, const char* sep);

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "1592272237@qq.com";
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr1);
//	const char* arr3 = "@.";
//	printf("账号：%s\n", strtok(arr2, arr3));
//	//找到第一个标记停止
//	printf("域名前缀：%s\n", strtok(NULL, arr3));
//	//从保存好的位置开始往后找
//	printf("域名后缀：%s\n", strtok(NULL, arr3));
//	//从保存好的位置开始往后找
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "1592272237@qq.com";
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr1);
//	const char* arr3 = "@.";
//	char* str = NULL;
//	for (str = strtok(arr2, arr3); str != NULL; str = strtok(NULL, arr3))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}

//char* strerror(int errnum);

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 4; i++)
//	{
//		printf("错误原因为：%s\n", strerror(i));
//	}
//	return 0;
//}

//int tolower(int c);
//int toupper(int c);

///* isupper example */
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//			c = tolower(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}

//void* memcpy(void* destination, const void* source, size_t num);

//#include <stdio.h>
//#include <string.h>
//struct {
//	char name[40];
//	int age;
//} person, person_copy;
//int main()
//{
//	char myname[] = "Pierre de Fermat";
//	/* using memcpy to copy string: */
//	memcpy(person.name, myname, strlen(myname) + 1);
//	person.age = 46;
//	/* using memcpy to copy structure: */
//	memcpy(&person_copy, &person, sizeof(person));
//	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
//	return 0;
//}

//void* memmove(void* destination, const void* source, size_t num);

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}

//int memcmp(const void* ptr1,
//	const void* ptr2,
//	size_t num);

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n > 0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	else if (n < 0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	return 0;
//}

//void* memset(void* dest, int c, size_t count);


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[50];
//
//	strcpy(str, "This is string.h library function");
//	puts(str);
//
//	memset(str, '$', 7);
//	puts(str);
//
//	return(0);
//}


////1	循环迭代的方法
//size_t my_strlen1(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////2	递归调用
//size_t my_strlen2(const char* str)
//{
//	assert(str);
//	if (*str)
//		return sim_strlen2(str + 1) + 1;
//	else
//		return 0;
//}
//
////3	指针相减
//size_t sim_strlen3(const char* str)
//{
//	assert(str);
//	const char* p = str;
//	while (*p++)
//	{
//		;
//	}
//	return (p - str - 1);
//}


//char* my_strcpy(char* destination, const char* source)
//{
//	char* ret = destination;
//	assert(destination && source);
//	while (*destination++ = *source++)
//	{
//		;
//	}
//	return ret;
//}

//char* my_strcat(char* destination, const char* source)
//{
//	char* ret = destination;
//	while (*destination)
//	{
//		destination++;
//	}
//	while (*destination++ = *source++)
//	{
//		;
//	}
//	return ret;
//}


//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//
//	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
//	{
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}

//BF匹配
//char* my_strstr(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	if (*s2 == '\0')
//	{
//		return (char*)s1;
//	}
//	const char* p1 = s1;
//	const char* p2 = s2;
//	const char* start = s1; //用于记录开始比较的位置
//	while (*p1)
//	{	//以防主串可能小于子串，循环条件不能只为*p1 == *p2
//		while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0') //单字符匹配成功则匹配下一个字符
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0') //匹配成功，返回开始比较的位置
//			return (char*)start;
//		//单趟匹配失败，子串退回到第一个字符，进行从主串的下一个字符开始与主串匹配
//		p1 = start + 1;
//		start = p1;
//		p2 = s2;
//	}
//	return NULL; //跳出外层循环说明匹配失败
//}

//void* my_memcpy(void* dest, const void* src, size_t nums)
//{
//	assert(src && dest);
//	int i = 0;
//	for (i = 0; i < nums; i++)
//	{
//		*((char*)dest + i) = *((char*)src + i);
//	}
//	return (char*)dest;
//}

//void* my_memmove(void* dest, const void* src, size_t nums)
//{
//	assert(src && dest);
//	void* ret = dest;
//	int i = 0;
//	if (dest < src)//从前向后
//	{
//		for (i = 0; i < nums; i++)
//		{
//			*((char*)dest + i) = *((char*)src + i);
//		}
//	}
//	else//从后向前
//	{
//		for (i = nums - 1; i >= 0; i--)
//		{
//			*((char*)dest + i) = *((char*)src + i);
//		}
//	}
//	return ret;
//}
