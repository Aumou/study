#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//3*4*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16  a[0]������Ƕ�ά����ĵ�һ��  ��һ��һ������ ��СΪ4*4=16
	printf("%d\n", sizeof(a[0]+1));//4/8
	printf("%d\n", sizeof(*(a[0]+1)));//4
	printf("%d\n", sizeof(a+1));//4/8 
	printf("%d\n", sizeof(*(a+1)));//16
	printf("%d\n", sizeof(&a[0]+1));//4/8
	printf("%d\n", sizeof(*(&a[0]+1)));//16
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16  �˴���Ȼa[3]��Խ��� ����sizeof����ֻ�Ǽ��������е�������ռ�Ŀռ� ��������ķ��� ������Ľ�������
	return 0;
}