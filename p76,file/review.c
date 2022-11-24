#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>

int main()
{
	FILE* p = fopen("test.txt", "r");
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//fputc('b', p);//fputc将字符输出到文件中去
	//fputc('i', p);
	//fputc('t', p);
	int ch = fgetc(p);
	printf("%c", ch);
	ch = fgetc(p);
	printf("%c", ch);
	ch = fgetc(p);
	printf("%c", ch);
	fclose(p);
	p = NULL;
	return 0;
}