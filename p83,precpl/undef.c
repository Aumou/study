#include <stdio.h>
#define MAX 100
int main()
{
	printf("MAX=%d\n", MAX);
#undef MAX //移除一个宏定义
	printf("MAX=%d\n", MAX);
	return 0;
}