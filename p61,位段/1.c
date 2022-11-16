#include<stdio.h>

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));
	return 0;
}