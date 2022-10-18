#include<stdio.h>
//º¯ÊıÖ¸Õë 
int Add(int a, int b)
{
	int c = a + b;
	return c;
}
void print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	int (*p)(int, int) = Add;
	void (*pp)(char*) = print;
	(*pp)("hello bit");
	printf("%p\n", p);
	printf("%p\n", Add);
	return 0;
}

