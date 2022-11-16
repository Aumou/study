#include<stdio.h>
//位段
struct S
{
	//一个整形占四个字节  32个比特位
	int a : 2;//代表内存中只占两个比特位
	int b : 5;
	int c : 10;
	int d : 30;
};
//int先占计算机32个比特位 给a两个 b五个 c十个 此时剩余的空间已不足三十个 所以会再开辟一个32位 然后将d的30位放入新开辟的空间中 所以是两个整形的空间 8个字节
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));
	return 0;
}