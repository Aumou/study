#include<stdio.h>
int main()
{
	char *p = "abcdef";
	printf("%d\n", sizeof(p));// 4/8
	printf("%d\n", sizeof(p + 1));// 4/8
	printf("%d\n", sizeof(*p));// 1
	printf("%d\n", sizeof(p[0]));// 1      arr[0]==*(arr+0)
	printf("%d\n", sizeof(&p));// 4/8 
	printf("%d\n", sizeof(&p+1));// 4/8
	printf("%d\n", sizeof(&p[0] + 1));// 4/8
	return 0;
}