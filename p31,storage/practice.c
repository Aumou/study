#include<stdio.h>
int main()
{
	char a = -1;
	//char中只能存放1个字节   取后八位
	//-1的补码
	//11111111111111111111111111111111
	//11111111
	//而最终结果要求打印的是%d整形 所以此处应该整形提升
	//1.有符号数的 在高位补符号位的数   2.无符号数在高位直接补零
	//则此处打印a的值应为11111111111111111111111111111111
	//b和c相同   无符号数c的值为   00000000000000000000000011111111
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d b=%d c=%d", a, b, c);
	return 0;
}