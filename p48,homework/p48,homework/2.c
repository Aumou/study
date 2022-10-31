#include<stdio.h>
int main()
{
	unsigned int a = 0x1234;
	unsigned char b = *(unsigned char*)&a;
	printf("%d\n", b);
	return 0;
}
//在32位大端模式处理器上变量b等于0x00
//将&a强行转化为char*后  解引用只能取一个字节 因为是大端所以是  00 00 12 34   小端 34 12 00 00