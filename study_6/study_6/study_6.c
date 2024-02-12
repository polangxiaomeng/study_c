#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int ret = 0;
//	ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
////函数栈帧的创建
//00BE1820 push ebp
//00BE1821 mov ebp, esp
//00BE1823 sub esp, 0E4h
//00BE1829 push ebx
//00BE182A push esi
//00BE182B push edi
//00BE182C lea edi, [ebp - 24h]
//00BE182F mov ecx, 9
//00BE1834 mov eax, 0CCCCCCCCh
//00BE1839 rep stos dword ptr es : [edi]
////main函数中的核心代码
//	int a = 3;
//00BE183B mov dword ptr[ebp - 8], 3
//	int b = 5;
//00BE1842 mov dword ptr[ebp - 14h], 5
//	int ret = 0;
//00BE1849 mov dword ptr[ebp - 20h], 0
//	ret = Add(a, b);
//00BE1850 mov eax, dword ptr[ebp - 14h]
//00BE1853 push eax
//00BE1854 mov ecx, dword ptr[ebp - 8]
//00BE1857 push ecx
//00BE1858 call 00BE10B4
//00BE185D add esp, 8
//00BE1860 mov dword ptr[ebp - 20h], eax
//	printf("%d\n", ret);
//00BE1863 mov eax, dword ptr[ebp - 20h]
//00BE1866 push eax
//00BE1867 push 0BE7B30h
//00BE186C call 00BE10D2
//00BE1871 add esp, 8
//	return 0;
//00BE1874 xor eax, eax
//}


//00BE1820 push ebp //把ebp寄存器中的值进行压栈，此时的ebp中存放的是invoke_main函数栈帧的ebp，esp - 4
//00BE1821 mov ebp, esp //move指令会把esp的值存放到ebp中，相当于产生了main函数的ebp，这个值就是invoke_main函数栈帧的esp
//00BE1823 sub esp, 0E4h //sub会让esp中的地址减去一个16进制数字0xe4,产生新的esp，此时的esp是main函数栈帧的esp，此时结合上一条指令的ebp和当前的esp，ebp和esp之间维护了一个块栈空间，这块栈空间就是为main函数开辟的，就是main函数的栈帧空间，这一段空间中将存储main函数中的局部变量，临时数据已经调试信息等。
//00BE1829 push ebx //将寄存器ebx的值压栈，esp-4
//00BE182A push esi //将寄存器esi的值压栈，esp-4
//00BE182B push edi //将寄存器edi的值压栈，esp-4
////上面3条指令保存了3个寄存器的值在栈区，这3个寄存器的在函数随后执行中可能会被修改，所以先保存寄存器原来的值，以便在退出函数时恢复。
////下面的代码是在初始化main函数的栈帧空间。
////1. 先把ebp-24h的地址，放在edi中
////2. 把9放在ecx中
////3. 把0xCCCCCCCC放在eax中
////4. 将从ebp-0x24h到ebp这一段的内存的每个字节都初始化为0xCC
//00BE182C lea edi, [ebp - 24h]
//00BE182F mov ecx, 9
//00BE1834 mov eax, 0CCCCCCCCh
//00BE1839 rep stos dword ptr es : [edi]


//edi = ebp - 0x24;
//ecx = 9;
//eax = 0xCCCCCCCC;
//for (; ecx == 0; --ecx, edi += 4)
//{
//	*(int*)edi = eax;
//}



//	int a = 3;
//00BE183B mov dword ptr[ebp - 8], 3 //将3存储到ebp-8的地址处，ebp-8的位置其实就是a变量
//	int b = 5;
//00BE1842 mov dword ptr[ebp - 14h], 5 //将5存储到ebp-14h的地址处，ebp-14h的位置其实是b变量
//	int ret = 0;
//00BE1849 mov dword ptr[ebp - 20h], 0 //将0存储到ebp-20h的地址处，ebp-20h的位置其实是ret变量
////以上汇编代码表示的变量a,b,ret的创建和初始化，这就是局部的变量的创建和初始化
////其实是局部变量的创建时在局部变量所在函数的栈帧空间中创建的
////调用Add函数
//	ret = Add(a, b);
////调用Add函数时的传参
////其实传参就是把参数push到栈帧空间中
//00BE1850 mov eax, dword ptr[ebp - 14h] //传递b，将ebp-14h处放的5放在eax寄存器中
//00BE1853 push eax //将eax的值压栈，esp-4
//00BE1854 mov ecx, dword ptr[ebp - 8] //传递a，将ebp-8处放的3放在ecx寄存器中
//00BE1857 push ecx //将ecx的值压栈，esp-4
////跳转调用函数
//00BE1858 call 00BE10B4
//00BE185D add esp, 8
//00BE1860 mov dword ptr[ebp - 20h], eax


////调用Add函数
//	ret = Add(a, b);
////调用Add函数时的传参
////其实传参就是把参数push到栈帧空间中，这里就是函数传参
//00BE1850 mov eax, dword ptr[ebp - 14h] //传递b，将ebp-14h处放的5放在eax寄存器中
//00BE1853 push eax //将eax的值压栈，esp-4
//00BE1854 mov ecx, dword ptr[ebp - 8] //传递a，将ebp-8处放的3放在ecx寄存器中
//00BE1857 push ecx //将ecx的值压栈，esp-4
////跳转调用函数
//00BE1858 call 00BE10B4
//00BE185D add esp, 8
//00BE1860 mov dword ptr[ebp - 20h], eax


////跳转调用函数
//00BE1858 call 00BE10B4
//00BE185D add esp, 8
//00BE1860 mov dword ptr[ebp - 20h], eax



//int Add(int x, int y)
//{
//00BE1760 push ebp //将main函数栈帧的ebp保存,esp-4
//00BE1761 mov ebp, esp //将main函数的esp赋值给新的ebp，ebp现在是Add函数的ebp
//00BE1763 sub esp, 0CCh //给esp-0xCC，求出Add函数的esp
//00BE1769 push ebx //将ebx的值压栈,esp-4
//00BE176A push esi //将esi的值压栈,esp-4
//00BE176B push edi //将edi的值压栈,esp-4
//	int z = 0;
//00BE176C mov dword ptr[ebp - 8], 0 //将0放在ebp-8的地址处，其实就是创建z
//	z = x + y;
////接下来计算的是x+y，结果保存到z中
//00BE1773 mov eax, dword ptr[ebp + 8] //将ebp+8地址处的数字存储到eax中
//00BE1776 add eax, dword ptr[ebp + 0Ch] //将ebp+12地址处的数字加到eax寄存中
//00BE1779 mov dword ptr[ebp - 8], eax //将eax的结果保存到ebp-8的地址处，其实就是放到z中
//	return z;
//00BE177C mov eax, dword ptr[ebp - 8] //将ebp-8地址处的值放在eax中，其实就是把z的值存储到eax寄存器中，这里是想通过eax寄存器带回计算的结果，做函数的返回值。
//}
//00BE177F pop edi
//00BE1780 pop esi
//00BE1781 pop ebx
//00BE1782 mov esp, ebp
//00BE1784 pop ebp
//00BE1785 ret



//00BE177F pop edi //在栈顶弹出一个值，存放到edi中，esp+4
//00BE1780 pop esi //在栈顶弹出一个值，存放到esi中，esp+4
//00BE1781 pop ebx //在栈顶弹出一个值，存放到ebx中，esp+4
//00BE1782 mov esp, ebp //再将Add函数的ebp的值赋值给esp，相当于回收了Add函数的栈帧空间
//00BE1784 pop ebp //弹出栈顶的值存放到ebp，栈顶此时的值恰好就是main函数的ebp，esp + 4，此时恢复了main函数的栈帧维护，esp指向main函数栈帧的栈顶，ebp指向了main函数栈帧的栈底。
//00BE1785 ret //ret指令的执行，首先是从栈顶弹出一个值，此时栈顶的值就是call指令下一条指令的地址，此时esp + 4，然后直接跳转到call指令下一条指令的地址处，继续往下执行。


//00BE185D add esp, 8 //esp直接+8，相当于跳过了main函数中压栈的a'和b'
//00BE1860 mov dword ptr[ebp - 20h], eax //将eax中值，存档到ebp-0x20的地址处，其实就是存储到main函数中ret变量中，而此时eax中就是Add函数中计算的x和y的和，可以看出来，本次函数的返回值是由eax寄存器带回来的。程序是在函数调用返回之后，在eax中去读取返回值的。
