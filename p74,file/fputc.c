#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>

int main()
{
	FILE* ps = fopen("test.txt", "w");
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//写文件
	fputc('b',ps);
	fputc('i',ps);
	fputc('t',ps);
	//关闭文件
	fclose(ps);
	ps = NULL;
	return 0;
}