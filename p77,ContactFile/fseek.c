#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	FILE* p = fopen("test.txt", "r");
	if (NULL == p)
	{
		return 0;
	}
	fseek(p, -2, SEEK_END);//�ı�ָ���λ��
	int ch = fgetc(p);
	printf("%c\n", ch);
	fclose(p);
	return 0;
}