#include<stdio.h>
//枚举
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

enum Color
{
	RED,
	GREEN,
	BLUE
};

int main()
{
	printf("%d %d %d\n", MALE, FEMALE,SECRET);
	printf("%d %d %d\n", RED, GREEN, BLUE);
	//枚举的类型为常量  只能进行初始化  不能对其值进行更改
	const int a = 10;//类似于此
	return 0;
}