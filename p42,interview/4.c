#include<stdio.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", strlen(p));// 6
	printf("%d\n", strlen(p + 1));// 5
	printf("%d\n", strlen(*p));// err
	printf("%d\n", strlen(p[0]));// err
	printf("%d\n", strlen(&p));// 随机值
	printf("%d\n", strlen(&p + 1));// 随机值
	printf("%d\n", strlen(&p[0] + 1));// 5
	return 0;
}