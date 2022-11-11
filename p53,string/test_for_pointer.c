#include<stdio.h>
int main()
{
	int i = 50;
	int* p1 = NULL;
	int** p2 = NULL;
	p1 = &i;
	p2 = &p1;//二级指针只能存放一级指针的地址 也就是&一级指针 通过第一次解引用之后获得一级指针所指向的内容 也就是一个地址 再一次解引用之后获得该地址的对应的内容
	printf("%d\n", **p2);
	return 0;
}