#include<stdio.h>
//1.指针类型决定解引用操作符能访问几个字节：char*p，*p可以访问一个字节；int*p，*p可以访问四个字节；
//2.指针类型决定了指针+1或者-1加或者减几个字节；char*p，p+1 跳过一个字节；int*p，p+1 跳过一个整形 四个字节； 
int main()
{
	int a = 0x11223344;
	/*int* p = &a;
	*p = 0;*/
	char* p = &a;
	*p = 0;
	return 0;
}