#include<stdio.h>
int main()
{
	/*char arr1[10] = "";
	memset(arr1,'#', 10);*/
	int arr1[10] = { 0 };
	memset(arr1, 1, 10);//memset是一个字节一个字节给内存 int型 一个数占四个字节 01010101010101010101
	return 0;
}
