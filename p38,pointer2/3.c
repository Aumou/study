#include<stdio.h>
//回调函数把函数的指针作为参数传给另一个函数，当这个指针被调用的时候，这个指针指向的函数就是回调函数
void print(char* str)
{
	printf("hehe:%s\n", str);
}
void test(void (*p)(char*))
{
	printf("test\n");
	p("bit");
}

int main()
{
	test(print);
	return 0;
}