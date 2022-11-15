#include<stdio.h>

struct s1
{
	char c1;
	int a;
	char c2;
};

struct s2
{
	char c1;
	char c2;
	int a;
};

int main()
{
	struct s1 S1 = { 0 };
	printf("%d\n", sizeof(S1));//结构体使用内存的方式 存在对齐数的概念 第一个成员在与结构体变量偏移量为0的地址处   其他成员变量要在某个数字（对齐数）的整数倍地址处
	struct s2 S2 = { 0 };
	printf("%d\n", sizeof(S2));
	return 0;
}
//对齐数：编译器默认的一个对齐数与该成员大小的较小值
//结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
//S1  char1占一个字节放在首地址处 int的大小为4 而对齐数为8 所以需要是4的倍数 则int第一个字节会放在偏移量为4的位置紧接着是c2的地址
//c2的地址放入后 总共占了9个字节 此时最大对齐数为4 而9不是4的倍数 则是S1的大小为12
