#include<stdio.h>
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf("%d %d", a + b, c);
	return 0;
}
//00000000000000000000000011001000-200
//11001000-a
//00000000000000000000000001100100-100
//01100100-b
//a+b 需要整形提升
//无符号数 高位补零
//00000000000000000000000100101100-a+b  300
//00101100-c中存储
//当以整数形式打印c时 进行整形提升
//00000000000000000000000000101100      44