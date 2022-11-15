#include<stdio.h>

struct S3
{
	double d;
	char c;
	int i;
};

int main()
{
	printf("%d\n", sizeof(struct S3));//16
	return 0;
}