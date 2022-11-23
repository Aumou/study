#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10000;
	FILE* p = fopen("test.txt", "wb");//如果没有test.txt 会自己先创建一个
	fwrite(&a, 4, 1, p);//二进制的形式写到文件中
	fclose(p);
	p = NULL;
	return 0;
}