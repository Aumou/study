#include<stdio.h>
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;

//假设p 的值为0x100000.  如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//一次加20个字节  将20化为16进制 加进去 0x00100014
	printf("%p\n", (unsigned long)p + 0x1);//将p强制转化为整形类型  先将1000000化为十进制后加1 相当于直接加1  0x00100001
	printf("%p\n", (unsigned int*)p + 0x1);//将p强制转化为整形指针  加1相当于四个字节 0x00100004 因为p已被强制转化为int* 所以直接加 不用先将16进制转化为10进制
	return 0;
}