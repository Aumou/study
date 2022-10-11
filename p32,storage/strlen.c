#include<stdio.h>
int main()
{
	char arr[10] = { 1,2,3,4,0,5,6 };
	printf("%d\n", strlen(arr));
	return 0;
} 
//此代码用于测试strlen的停止条件
//得知结果为\0和0都可以使strlen停止 因为他们的ASCII码都为0