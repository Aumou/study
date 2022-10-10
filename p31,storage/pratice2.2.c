#include<stdio.h>
int main()
{
	char a = 128;//char 1个字节8个比特位 能存的最大正数为01111111 127 无法存入128
	printf("%u\n", a);//01111111+1 = 10000000 = -128;
	return 0;
}