#include <stdio.h>
//输出结构体每个变量的偏移量
struct S
{
	char c1;
	int a;
	char c2;
};

#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}