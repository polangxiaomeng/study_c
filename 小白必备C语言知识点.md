# 小白必备C语言知识点

## 1.什么是C语言

> C语言是一门通用计算机编程语言，广泛应用于底层开发。C语言的设计目标是提供一种能以简易
>
> 的方式编译、处理低级存储器、产生少量的机器码以及不需要任何运行环境支持便能运行的编程语
>
> 言。
>
> 尽管C语言提供了许多低级处理的功能，但仍然保持着良好跨平台的特性，以一个标准规格写出的
>
> C语言程序可在许多电脑平台上进行编译，甚至包含一些嵌入式处理器（单片机或称MCU）以及超
>
> 级电脑等作业平台。
>
> 二十世纪八十年代，为了避免各开发厂商用的C语言语法产生差异，由美国国家标准局为C语言制
>
> 定了一套完整的美国国家标准语法，称为ANSI C，作为C语言最初的标准。 [1] 目前2011年12月8
>
> 日，国际标准化组织（ISO）和国际电工委员会（IEC）发布的C11标准是C语言的第三个官方标
>
> 准，也是C语言的最新标准，该标准更好的支持了汉字函数名和汉字标识符，一定程度上实现了汉
>
> 字编程。
>
> C语言是一门面向过程的计算机编程语言，与C++，Java等面向对象的编程语言有所不同。
>
> 其编译器主要有Clang、GCC、WIN-TC、SUBLIME、MSVC、Turbo C等。

## 2.第一个C语言程序

```
//初见第一个C语言代码
#include <stdio.h>
int main()
{
	printf("Hello world\n");	//\n表示换行
	return 0;
}
//解释：
//main函数是程序的入口
//一个工程中main函数有且仅有一个
//printf是一个库函数，使用的时候需要包含头文件 - stdio.h
//  std - 标准
//  input - 输入  scanf
//  output - 输出
```

## 3.数据类型

### C语言内置的数据类型

> ```
> //整数：
>
> char        //字符数据类型
> short       //短整型
> int         //整形
> long        //长整型
> long long   //更长的整形
>
> //小数：
>
> float       //单精度浮点数
> double      //双精度浮点数
> ```

### 每种类型的大小

**测试代码：**

```
//%d - 打印10进制的整数
//sizeof - 计算所占内存空间的大小
//各数据类型的大小
#include <stdio.h>

int main()
{
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));

    return 0;
}

```

**运行结果：**

```
1
2
4
4
8
4
8
8
```

**运用**

```
#include <stdio.h>


int main()
{
	//int类型定义变量age存放一个人的年龄
	int age = 10;
	printf("%d\n", age);

  //float或者double类型定义变量salary存放一个人的薪资
	//float salary = 10000.0f;
	double salary = 10000.0;
	printf("%.1lf\n", salary);

	return 0;
}

```

## 3.变量、常量

生活中的有些值是不变的（比如：圆周率，性别，身份证号码，血型等等）

有些值是可变的（比如：年龄，体重，薪资）。

不变的值，C语言中用常量的概念来表示，变得值C语言中用变量来表示。

### 3.1 定义变量的方法

```
int age = 150;
float weight = 45.5f;
char ch = 'w';
```



### 3.2 变量的命名

- 只能由字母（包括大写和小写）、数字和下划线（ _ ）组成。
- 不能以数字开头。
- 长度不能超过63个字符。
- 变量名中区分大小写的。
- 变量名不能使用关键字。
- 变量名最好有意义

### 3.3 变量的分类

- **局部变量**
- **全局变量**

当局部变量和全局变量同名的时候，局部变量优先使用。

```
#include <stdio.h>
int global = 2022;//全局变量
int main()
{
	int global = 2023;//局部变量
	printf("global = %d\n", global);
	return 0;
}
```

**变量的使用**

```
#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    printf("输入两个操作数:>");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("sum = %d\n", sum);//求和
    return 0;

}
//若使用scanf函数报错，请在第一行加入：#define _CRT_SECURE_NO_WARNINGS 1
```

### 3.4 变量的作用域和生命周期

#### 作用域

> 作用域（scope）是程序设计概念，通常来说，一段程序代码中所用到的名字并不总是有效/可用
>
> 的而限定这个名字的可用性的代码范围就是这个名字的作用域。

1. 局部变量的作用域是变量所在的局部范围。
2. 全局变量的作用域是整个工程。

#### 生命周期

> 变量的生命周期指的是变量的创建到变量的销毁之间的一个时间段

1. 局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
2. 全局变量的生命周期是：整个程序的生命周期。

### 3.5 常量

C语言中的常量和变量的定义的形式有所差异。

**C语言中的常量分为以下以下几种：**

- 字面常量
- const 修饰的常变量
- \#define 定义的标识符常量
- 枚举常量

```
#include <stdio.h>
//举例
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//括号中的MALE,FEMALE,SECRET是枚举常量
int main()
{
	//字面常量演示
	3.14;//字面常量
	1000;//字面常量

	//const 修饰的常变量
	const float pai = 3.14f; //这里的pai是const修饰的常变量
	//pai = 5.14;//errow const修饰的变量是不能直接修改的！

	//#define的标识符常量 演示
	#define MAX 100
	printf("max = %d\n", MAX);

	//枚举常量演示
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	//注：枚举常量的默认是从0开始，依次向下递增1的
	return 0;
}
```

- 上面例子上的 pai 被称为 const 修饰的常变量， const 修饰的常变量在C语言中只是在语法层面限制了变量 pai 不能直接被改变，但是 pai 本质上还是一个变量的，所以叫常变量。

## 4.字符串+转义字符+注释

## 4.1 字符串

```
"Hello world\n"
```

这种由双引号（Double Quote）引起来的一串字符称为字符串字面值（String Literal），或者简称字符

串。

注：字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的时候 \0 是结束标志，不算作字符串内容。

```
#include <stdio.h>
//下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
int main()
{
    char arr1[] = "study";
    char arr2[] = {'s', 't', 'u', 'd', 'y'};
    char arr3[] = {'s', 't', 'u', 'd', 'y', '\0'};
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    printf("%s\n", arr3);
    return 0;
}
```

### 4.2 转义字符

我们要在屏幕上打印一个目录： c:\code\test.c

我们该如何写代码？

```
#include <stdio.h>
int main()
{
 printf("c:\code\test.c\n");
    return 0;
}
```

实际上程序运行的结果是这样的：

```
c:code  est.c
```

这里就不得不提一下转义字符了。转义字符顾名思义就是转变意思。

下面看一些转义字符。

| 转义字符 |             释义             |
| ---- | :------------------------: |
| \'   |         用于表示字符常量'          |
| \''  |      用于表示一个字符串内部的双引号       |
| \\\\ |  用于表示一个反斜杠，防止它被解释为一个转义序列符  |
| \a   |          警告字符，蜂鸣           |
| \b   |            退格符             |
| \f   |            进纸符             |
| \n   |             换行             |
| \r   |             回车             |
| \t   |           水平制表符            |
| \v   |           垂直制表符            |
| \ddd | ddd表示1~3个八进制的数字。 如： \130 X |
| \xdd |  dd表示两个16进制数字。 如： \x30 0   |
| \?   | 在书写连续多个问号时使用，防止他们被解析成三字母词  |

**运用**

```
#include <stdio.h>
int main()
{
	//问题1：在屏幕上打印一个单引号'，怎么做？
	//问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}
```

```
//程序输出什么？
#include <stdio.h>
int main()
{
    printf("%d\n", strlen("abcdef"));
    // \62被解析成一个转义字符
    printf("%d\n", strlen("c:\test\628\test.c"));
    return 0;
}
```

## 5.注释

1. 代码中有不需要的代码可以直接删除，也可以注释掉
2. 代码中有些代码比较难懂，可以加一下注释文字

注释有两种风格：

- C语言风格的注释 /*xxxxxx*/
- 缺陷：不能嵌套注释
- C++风格的注释 //xxxxxxxx
- 可以注释一行也可以注释多行

