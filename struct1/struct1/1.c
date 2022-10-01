#include<stdio.h>
struct s
{
	int a;
	char c;
	char arr[20];
	double d;
};

typedef struct stu
{
	char ch[10];
	struct s S;
	char* pc;
}stu;

int main()
{
	char arr[] = "hello bit";
	stu fir = { "liu",{5,'a',"hello world",3.14},arr };
	printf("%s\n", fir.ch);
	printf("%c\n", fir.S.c);
	return 0;
}