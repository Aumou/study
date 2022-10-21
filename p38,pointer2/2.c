#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[10];
	int* p[10];//是一个数组------指针数组
	int(*p1)[10]=&arr;//是一个指针----数组指针   取出数组的地址

	int(*p2[10])(int, int);//一个数组----函数指针数组
	int(*(*p3[10])(int, int))=&p2;//一个指针-----指向函数指针数组的指针 指向的数组有10个元素
	//每个元素都是函数指针 每个元素的类型为int(*)(int,int)
	return 0;
}