#include<stdio.h>

void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
}
//test函数接收的相当于是一个指针 32位平台指针大小为4个字节 64位平台指针大小为8个字节 arr中一个int类型元素的大小为四个字节

int main()
{
	int arr[10] = { 0 };
	test(arr);
	return 0;
}