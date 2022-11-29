#include <stdio.h>
#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int Max(int x, int y)
{
	return (x > y ? x : y);
}


int main()
{
	int a = 10;
	int b = 20;
	printf("max=%d\n", Max(a, b));//函数在调用时 会有函数的调用和返回的开销
	printf("max=%d\n", MAX(a, b));//预处理阶段就完成了替换 没有函数的调用和返回的开销
	return 0;
}