#include<stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*) /*&数组是 数组指针类型 不能直接存进int型指针里面 所以要强制类型转换*/(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5  此时ptr已经是整形指针减1只会向前一个整形地址 所以为5
	return 0;
}