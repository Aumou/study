#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "abcd\0xxxxxxxxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 7);//��Ȼ���߸� ����strncat�������ں���ಹ�� ֻ��׷��world\0
	printf("%s\n", arr1);
	return 0;
}