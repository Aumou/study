#include<stdio.h>
int main()
{

	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err a ASCII
	//printf("%d\n", strlen(arr[1]));//err 传的是b的ASCII码 98 strlen从地址为98的地方开始找/0 属于越界访问
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}
