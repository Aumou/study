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
	//д�ļ�
	printf("%c", fgetc(ps));
	printf("%c", fgetc(ps));
	printf("%c", fgetc(ps));
	//�ر��ļ�
	fclose(ps);
	ps = NULL;
	return 0;
}