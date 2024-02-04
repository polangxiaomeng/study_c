> **🍕博客主页：️[自信不孤单](https://blog.csdn.net/czh1592272237)**
>
> **🍬文章专栏：[C语言](https://blog.csdn.net/czh1592272237/category_12209876.html)**
>
> **🍚代码仓库：[破浪晓梦](https://gitee.com/polang-xiaomeng/study_c)**
>
> **🍭欢迎关注：欢迎大家点赞收藏+关注**

# 小白必备C语言知识点

[toc]

---

# 1. 什么是C语言

> C语言是一门通用计算机编程语言，广泛应用于底层开发。C语言的设计目标是提供一种能以简易的方式编译、处理低级存储器、产生少量的机器码以及不需要任何运行环境支持便能运行的编程语言。
>
> 尽管C语言提供了许多低级处理的功能，但仍然保持着良好跨平台的特性，以一个标准规格写出的C语言程序可在许多电脑平台上进行编译，甚至包含一些嵌入式处理器（单片机或称MCU）以及超级电脑等作业平台。
>
> 二十世纪八十年代，为了避免各开发厂商用的C语言语法产生差异，由美国国家标准局为C语言制定了一套完整的美国国家标准语法，称为ANSI C，作为C语言最初的标准。 [1] 目前2011年12月8日，国际标准化组织（ISO）和国际电工委员会（IEC）发布的C11标准是C语言的第三个官方标准，也是C语言的最新标准，该标准更好的支持了汉字函数名和汉字标识符，一定程度上实现了汉字编程。
>
> C语言是一门面向过程的计算机编程语言，与C++，Java等面向对象的编程语言有所不同。
>
> 其编译器主要有Clang、GCC、WIN-TC、SUBLIME、MSVC、Turbo C等。

# 2. 第一个C语言程序

```c
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

# 3. 数据类型

## C语言内置的数据类型

> ```c
> //整数：
>char        //字符数据类型
> short       //短整型
> int         //整型
> long        //长整型
> long long   //更长的整型
> 
>//小数：
> float       //单精度浮点数
>double      //双精度浮点数
> ```

## 每种类型的大小

**测试代码：**

```c
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

```c
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

```c
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

# 4. 变量、常量

生活中的有些值是不变的（比如：圆周率，性别，身份证号码，血型等等）

有些值是可变的（比如：年龄，体重，薪资）。

不变的值，C语言中用常量的概念来表示，变得值C语言中用变量来表示。

## 4.1 定义变量的方法

```c
int age = 150;
float weight = 45.5f;
char ch = 'w';
```



## 4.2 变量的命名

- 只能由字母（包括大写和小写）、数字和下划线（ _ ）组成。
- 不能以数字开头。
- 长度不能超过63个字符。
- 变量名中区分大小写的。
- 变量名不能使用关键字。
- 变量名最好有意义

## 4.3 变量的分类

- **局部变量**
- **全局变量**

当局部变量和全局变量同名的时候，局部变量优先使用。

```c
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

```c
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

## 4.4 变量的作用域和生命周期

### 作用域

> 作用域（scope）是程序设计概念，通常来说，一段程序代码中所用到的名字并不总是有效/可用的而限定这个名字的可用性的代码范围就是这个名字的作用域。
>

1. 局部变量的作用域是变量所在的局部范围。
2. 全局变量的作用域是整个工程。

### 生命周期

> 变量的生命周期指的是变量的创建到变量的销毁之间的一个时间段

1. 局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
2. 全局变量的生命周期是：整个程序的生命周期。

## 4.5 常量

C语言中的常量和变量的定义的形式有所差异。

**C语言中的常量分为以下以下几种：**

- 字面常量
- const 修饰的常变量
- \#define 定义的标识符常量
- 枚举常量

这里来举例演示一下各类型常量的使用

```c
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

# 5. 字符串+转义字符+注释

## 5.1 字符串

```c
"Hello world\n"
```

这种由双引号（Double Quote）引起来的一串字符称为字符串字面值（String Literal），或者简称字符串。

注：字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的时候 \0 是结束标志，不算作字符串内容。

```c
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

## 5.2 转义字符

我们要在屏幕上打印一个目录： c:\code\test.c

我们该如何写代码？

```c
#include <stdio.h>
int main()
{
	printf("c:\code\test.c\n");
	return 0;
}
```

实际上程序运行的结果是这样的：

```c
c:code  est.c
```

这里就不得不提一下转义字符了。转义字符顾名思义就是转变意思。

下面看一些转义字符。

| 转义字符 |             释义             |
| ---- | :------------------------: |
| \\'  |         用于表示字符常量'          |
| \\'' |      用于表示一个字符串内部的双引号       |
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
| \\?  | 在书写连续多个问号时使用，防止他们被解析成三字母词  |

**运用**

```c
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

```c
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

# 6. 注释

1. 代码中有不需要的代码可以直接删除，也可以注释掉
2. 代码中有些代码比较难懂，可以加一下注释文字

注释有两种风格：

C语言风格的注释：

```c
/*

xxxxxx

*/
```

- 缺陷：不能嵌套注释

C++风格的注释：

```c
//xxxxxxxx
```

- 可以注释一行也可以注释多行

# 7. 选择语句

选择语句有两种，分别是if和switch语句

首先来看if语句的语法结构

```c
语法结构：
if (表达式)
	语句1;
else
	语句2;
//多分支    
if (表达式1)
	语句1;
else if (表达式2)
	语句2;
else
	语句3;
```

再来看switch语句的语法结构

```c
switch(整型表达式)
{
    case 整型常量表达式:
        语句;
}
```

# 8. 循环语句

- while
- for
- do while

循环语句主要用来实现一些你想执行多次的语句，以上是三种循环语句类型

首先介绍一下while循环语句的语法结构：

```c
while(条件表达式)
{
    循环语句；
}
```

接着介绍for循环的语法结构

```c
for(表达式1; 表达式2; 表达式3)
{
    循环语句;
}
```

**表达式1**

表达式1为初始化部分，用于初始化循环变量的。

**表达式2**

表达式2为条件判断部分，用于判断循环时候终止。

**表达式3**

表达式3为调整部分，用于循环条件的调整。

最后是do while语句的语法结构

```c
do
{
    循环语句;
}
while(条件表达式);
```

注：要想跳出循环可以通过`break;`这条语句跳出循环执行后面语句；也可通过`continue;`跳到循环开头时候的语句继续执行

# 9. 数组

要存储1-10的数字，怎么存储？

C语言中给了数组的定义：一组相同类型元素的集合

## 9.1 数组定义

```c
int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个整型数组，最多放10个元素
```

## 9.2 数组的下标

C语言规定：数组的每个元素都有一个下标，下标是从0开始的。

数组可以通过下标来访问的。

比如：

```c
int arr[10] = {0};
//如果数组10个元素，下标的范围是0-9
```

[]里的数就是数组的下标值

## 9.3 数组的使用

```c
#include <stdio.h>
int main()
{
    int i = 0;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
```

# 10. 操作符

## 算数操作符

```c
+ - * / %
```

## 移位操作符

```c
>> <<
```

## 位操作符

```c
& ^ |
```

## 赋值操作符

```c
= += -= *= /= &= ^= |= >>= <<=
```

## 单目操作符

```c
!           逻辑反操作
-           负值
+           正值
&           取地址
sizeof      操作数的类型长度（以字节为单位）
~           对一个数的二进制按位取反
--          前置、后置--
++          前置、后置++
*           间接访问操作符(解引用操作符)
(类型)       强制类型转换
```

## 关系操作符

```c
>
>=
<
<=
!=   用于测试“不相等”
==      用于测试“相等”
```

## 条件操作符

```c
exp1 ? exp2 : exp3
```

## 逻辑操作符

```c
&&     逻辑与
||     逻辑或
```

## 逗号操作符

```c
exp1, exp2, exp3,...,expn
```

## 下标引用、函数调用、结构成员

```c
[] () . ->
```

# 11. 常见关键字

```c
auto  break   case  char  const   continue  default  do   double else  enum   
extern float  for   goto  if   int   long  register    return   short  signed
sizeof   static struct  switch  typedef union  unsigned   void  volatile  while
```

C语言提供了丰富的关键字，这些关键字都是语言本身预先设定好的，用户自己是不能创造关键字的。

# 12. define定义常量和宏

```c
//define定义标识符常量
#define MAX 1000
//define定义宏
#define ADD(x, y) ((x)+(y))
#include <stdio.h>
int main()
{
    int sum = ADD(2, 3);
    printf("sum = %d\n", sum);

    sum = 10*ADD(2, 3);
    printf("sum = %d\n", sum);

    return 0;
}
```

==注：此篇文章到这里就结束了，只适合小白初学了解c语言的一些基本内容，如想深入学习每一模块的内容请看我后续的文章
如果对您有帮助，请一键三连，您的支持是我创作最大的动力==

