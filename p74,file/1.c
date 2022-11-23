#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>

int main()
{
	FILE* ps = fopen("test.txt", "w");//写的形式会删掉原来老的文件 新建一个新的文件  读的形式如果该文件不存在会报错
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fclose(ps);
	ps = NULL;
	return 0;
}