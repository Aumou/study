#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>

int main()
{
	FILE* ps = fopen("test.txt", "w");//д����ʽ��ɾ��ԭ���ϵ��ļ� �½�һ���µ��ļ�  ������ʽ������ļ������ڻᱨ��
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fclose(ps);
	ps = NULL;
	return 0;
}