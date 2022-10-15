#include<stdio.h>
int main()
{
	char* arr[5];//如何将数组arr的地址放到一个数组指针中
	char* (*p)[5] = &arr;
	int  arr1[2] = { 0 };
	int(*p1)[2] = &arr1;
	return 0;
}