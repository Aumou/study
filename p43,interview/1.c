#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//3*4*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16  a[0]代表的是二维数组的第一行  第一行一共四列 大小为4*4=16
	printf("%d\n", sizeof(a[0]+1));//4/8
	printf("%d\n", sizeof(*(a[0]+1)));//4
	printf("%d\n", sizeof(a+1));//4/8 
	printf("%d\n", sizeof(*(a+1)));//16
	printf("%d\n", sizeof(&a[0]+1));//4/8
	printf("%d\n", sizeof(*(&a[0]+1)));//16
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16  此处虽然a[3]是越界的 但是sizeof函数只是计算括号中的类型所占的空间 并不会真的访问 不会真的进行运算
	return 0;
}