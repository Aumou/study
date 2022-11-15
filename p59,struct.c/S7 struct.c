#include<stdio.h>

struct S
{
	int a;
	char b;
	double c;
};

void Init(struct S* tmp)
{
	tmp->a = 100;//结构体指针 赋值的时候使用->
	tmp->b = 'w';
	tmp->c = 3.14;
}

void Print1(struct S tmp)
{
	printf("%d %c %f\n", tmp.a, tmp.b,tmp.c);
}

void Print2(struct S* tmp)
{
	printf("%d %c %f\n", tmp->a, tmp->b, tmp->c);
}

int main()
{
	struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s);
	return 0;
}