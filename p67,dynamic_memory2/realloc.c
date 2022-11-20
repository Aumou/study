#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	int* p = (int*)malloc(5*sizeof(int));
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	//ʹ��malloc������20���ֽڵĿռ�
	//����˴�20���ֽڵĿռ䲻��ʹ�� ϣ����40���ֽڵĿռ乩����ʹ��
	//��realloc��������̬���ٵ��ڴ�
	//1.���realloc���ٵ�ֻ��һ��С�ռ� ��֮ǰ�ѿ��ٵĿռ�����㹻�Ŀռ� ��ô��ֱ��׷��
	//2.���֮��û���㹻�Ŀռ� ��ôrealloc�����¿���һ���Ŀռ� ����֮ǰ�����ݸ��Ƶ��µĿռ��� ��ɾ��֮ǰ�ռ������ ͬʱ���ͷ�֮ǰ����һ��ռ�
	//3.�������Ŀռ�̫�� ��ôrealloc�᷵��һ����ָ�� ������Ҫһ���м�ֵ�Ƚ����ж��Ƿ񿪱ٳɹ�
	int* ptr = realloc(p, 40);
	if (NULL == ptr)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		p = ptr;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i)); 
		}
	}
	free(p);
	p = NULL;
	return 0;
}
