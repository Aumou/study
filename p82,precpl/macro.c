#include <stdio.h>
#define MULTIFY(X) ((X)*(X))

//int main()
//{
//	int ret = MULTIFY(5+1);
//	printf("%d\n", ret);
//	return 0;
//}

#define PRINT(X) printf("the value of "#X" is %d\n",X)//宏定义中的# 可以X对应的内容变成对应的符号
int main()
{
	int a = 10;
	int b = 20;
	PRINT(a);
	PRINT(b);
	return 0;
}