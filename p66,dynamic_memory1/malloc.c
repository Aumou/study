#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main()
{
	//���ڴ��������εĿռ�
	int* p = (int*)malloc(INT_MAX);
	if (NULL == p)
	{
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n",strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;//���ռ䱻����ȥ֮�� p����Ұָ�� ���ܻ�ı�õ�ַ��ֵ ���ڷ���
	return 0;
}