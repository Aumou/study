#include<stdio.h>
int main()
{
	char a = 128;//char 1���ֽ�8������λ �ܴ���������Ϊ01111111 127 �޷�����128
	printf("%u\n", a);//01111111+1 = 10000000 = -128;
	return 0;
}