#include<stdio.h>
int Add(int a, int b)
{
	int z = a + b;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int (*pa)(int, int)=Add;
	printf("%d\n", pa(2, 3));
	printf("%d\n", (*pa)(2, 3));
	printf("%d\n", Add(2, 3));
	printf("%d\n", (**pa)(2, 3));
	//函数名代表的是函数的地址 所以pa()的作用等同于Add()
	//而(*pa)则代表通过pa中存放的地址解引找到对应的函数实际效果等同于pa和Add
	//(**pa)和(***pa)同理 通过地址和解引用地址都可以使用函数
	return 0;
}