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
	//д�ļ�
	fputc('b',ps);
	fputc('i',ps);
	fputc('t',ps);
	//�ر��ļ�
	fclose(ps);
	ps = NULL;
	return 0;
}