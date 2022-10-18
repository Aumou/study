#include<stdio.h>

void test(int *arr)
{}//此写法不对 二维数组首元素地址为第一行的地址
void test(int arr[][5])
{}//此写法正确 二维数组的传参只可以省略行 不可以省略列
void test(int** arr)
{}//此写法错误 二级指针存放的是一级指针 而二维数组名传递的是第一行数组的地址不是二级指针
void test(int* arr[5])
{}//此写法错误 用了一个指针数组来接收 二维数组名
void test(int (*arr)[5])
{}//此写法正确 用了一个数组指针来存放 二维数组第一行的数组的地址

int main()
{
	int arr[3][5];
	test(arr);
	return 0;
}