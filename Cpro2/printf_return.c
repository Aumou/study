#include <stdio.h>
//printf�з���ֵ ��һ�д�ӡ�ַ��� �ڶ��д�ӡprintf�ķ���ֵ ��printf�ķ���ֵΪ�ַ����ĳ��� ��
int main()
{
	int ret = printf("Hello world!");//���в��ܼ�\n ��Ϊ\nҲ����뷵��ֵ�ļ���
	printf("\n%d\n", ret);
	//printf("\n%d\n",printf("Hello world!"));
	return 0;
}

