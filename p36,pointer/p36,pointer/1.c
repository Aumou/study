#include<stdio.h>
//һά����Ĵ���
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
//������ʽ������
int main()
{
	int arr[10];
	int* arr2[20];
	test(arr);
	test1(arr2);
	return 0;
}