#include<stdio.h>
#include<string.h>
int main()
{
	if (strlen("abc") - strlen("abcdef") > 0)//strlen�ķ�������Ϊsize_t==unsigned int 3-6=-3 ����Ϊ���޷���������Ӧ��-3�����޷����� ��һ���ϴ������
	{
		printf("hehe\n");
	}
	else
		printf("haha\n");
	return 0;
}