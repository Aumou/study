#include<stdio.h>
int main()
{
	//strlen 函数 需要接收的是一个地址 然后从该地址开始向后寻找/0
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//随机值   当字符数组中存放的是一个一个字符而不是字符串时 数组中是没有\0的 所有strlen会一直找下去
	printf("%d\n", strlen(arr+0));//随机值   从首元素的地址开始找 等价于第一个
	//printf("%d\n", strlen(*arr));//err 非法访问  strlen需要接收的是地址 此处传了a元素 ASCII码为97 则strlen会从地址为97的地方开始找/0 属于非法访问 编译器会报错
	printf("%d\n", strlen(arr[1]));//err  传的是第二个元素 等同于上 非法访问
	printf("%d\n", strlen(&arr));//随机值 整个数组的地址 同一
	printf("%d\n", strlen(&arr+1));//随机值 跳过整个数组后的第一个位置的地址
	printf("%d\n", strlen(&arr[0]+1));//随机值  第二个元素的地址开始找/0
	//printf("%d\n", sizeof(arr));  //6  整个数组的大小   char类型 一个元素的大小为1字节  6*1=6字节
	//printf("%d\n", sizeof(arr+0));  //4/8  首元素的地址 4/8字节
	//printf("%d\n", sizeof(*arr));   //1  首元素的大小 1字节
	//printf("%d\n", sizeof(arr[1]));  //1   第二个元素的大小   1字节
	//printf("%d\n", sizeof(&arr));  //4/8 整个数组的地址 4/8
	//printf("%d\n", sizeof(&arr+1));//4/8  跳过整个数组的下一个位置的地址 4/8字节
	//printf("%d\n", sizeof(&arr[0]+1));//4/8  第二个元素的地址 4/8字节1
	return 0;}