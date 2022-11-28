#include <stdio.h>
#define CAT(X,Y) X##Y
//宏定义中 双#号 可以将两个符号连接起来
int main()
{
	int Class84 = 2019;
	printf("%d\n", CAT(Class, 84));
	return 0;
}