#include<stdio.h>

struct T
{
	double weight;
	short age;
};

struct S
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[20];
};

int main()
{
	//struct S s = { 'c',100,3.14,"hello bit"};
	struct S s = { 'c',{78.7,18},100,3.14,"hello bit" };
	printf("%c %lf %d %d %lf %s\n", s.c, s.st.weight, s.st.age, s.a, s.d, s.arr);
	return 0;
}