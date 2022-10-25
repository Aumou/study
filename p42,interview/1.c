#include<stdio.h>
int main()
{

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));// 7  
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8    跳过整个数组后的地址
	printf("%d\n", sizeof(&arr[0] + 1));//4/8   &arr[0]取地址后加一  第二个元素的地址
	return 0;
}