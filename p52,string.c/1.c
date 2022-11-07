#include<stdio.h>
#include<string.h>
int main()
{
	if (strlen("abc") - strlen("abcdef") > 0)//strlen的返回类型为size_t==unsigned int 3-6=-3 但因为是无符号数所以应将-3读成无符号数 是一个较大的正数
	{
		printf("hehe\n");
	}
	else
		printf("haha\n");
	return 0;
}