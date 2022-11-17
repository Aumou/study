#include<stdio.h>

union Un
{
	int i;//4 8 4
	char c[5];//1 8 1  
	//5 大小必须是最大对齐数的倍数 所以5不满足大小 大小应为8
}u;

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}