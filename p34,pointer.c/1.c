#include<stdio.h>

void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
}
//test�������յ��൱����һ��ָ�� 32λƽָ̨���СΪ4���ֽ� 64λƽָ̨���СΪ8���ֽ� arr��һ��int����Ԫ�صĴ�СΪ�ĸ��ֽ�

int main()
{
	int arr[10] = { 0 };
	test(arr);
	return 0;
}