#include<stdio.h>

#pragma pack(1)//更改vs默认的对齐数8为括号中的数
struct S1
{
	char a;
	double b;
};
#pragma pack()//取消设置的默认对齐数 更改为默认 但是由上到下读 struct S1读完才取消 所以S1还是以对齐数1来存储

int main()
{
	printf("%d\n", sizeof(struct S1));
	return 0;
}