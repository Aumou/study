#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
		printf("open file success\n");
	return 0;
}//解析出使用库函数时发生错误的原因 errno则代表发生错误时的原因  也可以将数字打进去自己看对应的错误是什么