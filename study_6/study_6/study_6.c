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
////����ջ֡�Ĵ���
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
////main�����еĺ��Ĵ���
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


//00BE1820 push ebp //��ebp�Ĵ����е�ֵ����ѹջ����ʱ��ebp�д�ŵ���invoke_main����ջ֡��ebp��esp - 4
//00BE1821 mov ebp, esp //moveָ����esp��ֵ��ŵ�ebp�У��൱�ڲ�����main������ebp�����ֵ����invoke_main����ջ֡��esp
//00BE1823 sub esp, 0E4h //sub����esp�еĵ�ַ��ȥһ��16��������0xe4,�����µ�esp����ʱ��esp��main����ջ֡��esp����ʱ�����һ��ָ���ebp�͵�ǰ��esp��ebp��esp֮��ά����һ����ջ�ռ䣬���ջ�ռ����Ϊmain�������ٵģ�����main������ջ֡�ռ䣬��һ�οռ��н��洢main�����еľֲ���������ʱ�����Ѿ�������Ϣ�ȡ�
//00BE1829 push ebx //���Ĵ���ebx��ֵѹջ��esp-4
//00BE182A push esi //���Ĵ���esi��ֵѹջ��esp-4
//00BE182B push edi //���Ĵ���edi��ֵѹջ��esp-4
////����3��ָ�����3���Ĵ�����ֵ��ջ������3���Ĵ������ں������ִ���п��ܻᱻ�޸ģ������ȱ���Ĵ���ԭ����ֵ���Ա����˳�����ʱ�ָ���
////����Ĵ������ڳ�ʼ��main������ջ֡�ռ䡣
////1. �Ȱ�ebp-24h�ĵ�ַ������edi��
////2. ��9����ecx��
////3. ��0xCCCCCCCC����eax��
////4. ����ebp-0x24h��ebp��һ�ε��ڴ��ÿ���ֽڶ���ʼ��Ϊ0xCC
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
//00BE183B mov dword ptr[ebp - 8], 3 //��3�洢��ebp-8�ĵ�ַ����ebp-8��λ����ʵ����a����
//	int b = 5;
//00BE1842 mov dword ptr[ebp - 14h], 5 //��5�洢��ebp-14h�ĵ�ַ����ebp-14h��λ����ʵ��b����
//	int ret = 0;
//00BE1849 mov dword ptr[ebp - 20h], 0 //��0�洢��ebp-20h�ĵ�ַ����ebp-20h��λ����ʵ��ret����
////���ϻ������ʾ�ı���a,b,ret�Ĵ����ͳ�ʼ��������Ǿֲ��ı����Ĵ����ͳ�ʼ��
////��ʵ�Ǿֲ������Ĵ���ʱ�ھֲ��������ں�����ջ֡�ռ��д�����
////����Add����
//	ret = Add(a, b);
////����Add����ʱ�Ĵ���
////��ʵ���ξ��ǰѲ���push��ջ֡�ռ���
//00BE1850 mov eax, dword ptr[ebp - 14h] //����b����ebp-14h���ŵ�5����eax�Ĵ�����
//00BE1853 push eax //��eax��ֵѹջ��esp-4
//00BE1854 mov ecx, dword ptr[ebp - 8] //����a����ebp-8���ŵ�3����ecx�Ĵ�����
//00BE1857 push ecx //��ecx��ֵѹջ��esp-4
////��ת���ú���
//00BE1858 call 00BE10B4
//00BE185D add esp, 8
//00BE1860 mov dword ptr[ebp - 20h], eax


////����Add����
//	ret = Add(a, b);
////����Add����ʱ�Ĵ���
////��ʵ���ξ��ǰѲ���push��ջ֡�ռ��У�������Ǻ�������
//00BE1850 mov eax, dword ptr[ebp - 14h] //����b����ebp-14h���ŵ�5����eax�Ĵ�����
//00BE1853 push eax //��eax��ֵѹջ��esp-4
//00BE1854 mov ecx, dword ptr[ebp - 8] //����a����ebp-8���ŵ�3����ecx�Ĵ�����
//00BE1857 push ecx //��ecx��ֵѹջ��esp-4
////��ת���ú���
//00BE1858 call 00BE10B4
//00BE185D add esp, 8
//00BE1860 mov dword ptr[ebp - 20h], eax


////��ת���ú���
//00BE1858 call 00BE10B4
//00BE185D add esp, 8
//00BE1860 mov dword ptr[ebp - 20h], eax



//int Add(int x, int y)
//{
//00BE1760 push ebp //��main����ջ֡��ebp����,esp-4
//00BE1761 mov ebp, esp //��main������esp��ֵ���µ�ebp��ebp������Add������ebp
//00BE1763 sub esp, 0CCh //��esp-0xCC�����Add������esp
//00BE1769 push ebx //��ebx��ֵѹջ,esp-4
//00BE176A push esi //��esi��ֵѹջ,esp-4
//00BE176B push edi //��edi��ֵѹջ,esp-4
//	int z = 0;
//00BE176C mov dword ptr[ebp - 8], 0 //��0����ebp-8�ĵ�ַ������ʵ���Ǵ���z
//	z = x + y;
////�������������x+y��������浽z��
//00BE1773 mov eax, dword ptr[ebp + 8] //��ebp+8��ַ�������ִ洢��eax��
//00BE1776 add eax, dword ptr[ebp + 0Ch] //��ebp+12��ַ�������ּӵ�eax�Ĵ���
//00BE1779 mov dword ptr[ebp - 8], eax //��eax�Ľ�����浽ebp-8�ĵ�ַ������ʵ���Ƿŵ�z��
//	return z;
//00BE177C mov eax, dword ptr[ebp - 8] //��ebp-8��ַ����ֵ����eax�У���ʵ���ǰ�z��ֵ�洢��eax�Ĵ����У���������ͨ��eax�Ĵ������ؼ���Ľ�����������ķ���ֵ��
//}
//00BE177F pop edi
//00BE1780 pop esi
//00BE1781 pop ebx
//00BE1782 mov esp, ebp
//00BE1784 pop ebp
//00BE1785 ret



//00BE177F pop edi //��ջ������һ��ֵ����ŵ�edi�У�esp+4
//00BE1780 pop esi //��ջ������һ��ֵ����ŵ�esi�У�esp+4
//00BE1781 pop ebx //��ջ������һ��ֵ����ŵ�ebx�У�esp+4
//00BE1782 mov esp, ebp //�ٽ�Add������ebp��ֵ��ֵ��esp���൱�ڻ�����Add������ջ֡�ռ�
//00BE1784 pop ebp //����ջ����ֵ��ŵ�ebp��ջ����ʱ��ֵǡ�þ���main������ebp��esp + 4����ʱ�ָ���main������ջ֡ά����espָ��main����ջ֡��ջ����ebpָ����main����ջ֡��ջ�ס�
//00BE1785 ret //retָ���ִ�У������Ǵ�ջ������һ��ֵ����ʱջ����ֵ����callָ����һ��ָ��ĵ�ַ����ʱesp + 4��Ȼ��ֱ����ת��callָ����һ��ָ��ĵ�ַ������������ִ�С�


//00BE185D add esp, 8 //espֱ��+8���൱��������main������ѹջ��a'��b'
//00BE1860 mov dword ptr[ebp - 20h], eax //��eax��ֵ���浵��ebp-0x20�ĵ�ַ������ʵ���Ǵ洢��main������ret�����У�����ʱeax�о���Add�����м����x��y�ĺͣ����Կ����������κ����ķ���ֵ����eax�Ĵ����������ġ��������ں������÷���֮����eax��ȥ��ȡ����ֵ�ġ�
