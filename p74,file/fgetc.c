#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>

int main()
{
	FILE* ps = fopen("test.txt", "r");
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//写文件
	printf("%c", fgetc(ps));
	printf("%c", fgetc(ps));
	printf("%c", fgetc(ps));
	//关闭文件
	fclose(ps);
	ps = NULL;
	return 0;
}