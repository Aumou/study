#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
		printf("open file success\n");
	return 0;
}//������ʹ�ÿ⺯��ʱ���������ԭ�� errno�����������ʱ��ԭ��  Ҳ���Խ����ִ��ȥ�Լ�����Ӧ�Ĵ�����ʲô