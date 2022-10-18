#include<stdio.h>
//一维数组的传参
void test(int arr[])
{}
void test(int* arr)
{}
void test(int arr[10])
{}
void test(int** arr2)
{}
void test1(int *arr2[])
{}
void test1(int *arr2[20])
{}
//以上形式都可以
int main()
{
	int arr[10];
	int* arr2[20];
	test(arr);
	test1(arr2);
	return 0;
}