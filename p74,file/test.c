#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10000;
	FILE* p = fopen("test.txt", "wb");//���û��test.txt ���Լ��ȴ���һ��
	fwrite(&a, 4, 1, p);//�����Ƶ���ʽд���ļ���
	fclose(p);
	p = NULL;
	return 0;
}