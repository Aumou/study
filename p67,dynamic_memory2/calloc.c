#include<stdio.h>
#include<errno.h>
#include<string.h>

int main()
{
	int* p = (int*)calloc(10, sizeof(int));//�����malloc���� calloc���ȶԸÿռ���г�ʼ�� ����mallocЧ�ʸ�  ��calloc���ʼ�� ����ǧ��
	if (NULL == p)
	{
		printf("%S\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;
	return 0;
}