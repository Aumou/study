#include<stdio.h>
int main()
{
	char* a[] = { "work","at","alibaba" };
	char* *pa = a;//char* *pa  *pa表示pa是一个指针 char*表示存放的是char*类型
	pa++;//这里意思为首元素的地址++ 也就是第二个元素的地址
	printf("%s\n", *pa);
	return 0;
}