#include<stdio.h>
int main()
{
	const char* p = "abcdef";//"abcdef"是一个字符串常量 
	//*p = 'W';
	//字符串常量为常量是无法更改的 在定义类型时应在前面加上const来修饰 以表示无法改变
	printf("%c\n", *p);
	printf("%s\n", p);
	return 0;
}