#include<stdio.h>
int main()
{
	char* arr[5];//��ν�����arr�ĵ�ַ�ŵ�һ������ָ����
	char* (*p)[5] = &arr;
	int  arr1[2] = { 0 };
	int(*p1)[2] = &arr1;
	return 0;
}