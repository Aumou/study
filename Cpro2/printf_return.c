#include <stdio.h>
//printf有返回值 第一行打印字符串 第二行打印printf的返回值 （printf的返回值为字符串的长度 ）
int main()
{
	int ret = printf("Hello world!");//此行不能加\n 因为\n也会参与返回值的计算
	printf("\n%d\n", ret);
	//printf("\n%d\n",printf("Hello world!"));
	return 0;
}

