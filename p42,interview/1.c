#include<stdio.h>
int main()
{

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));// 7  
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8    �������������ĵ�ַ
	printf("%d\n", sizeof(&arr[0] + 1));//4/8   &arr[0]ȡ��ַ���һ  �ڶ���Ԫ�صĵ�ַ
	return 0;
}