#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "www.tencent@qq.com";
	char* pa = ".@";
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	char* ret = NULL;
	for (ret = strtok(arr, pa); ret != NULL; ret=strtok(NULL, pa))//�����������ʱ ���ס��һ��\0��λ�� ���Եڶ���ֱ�Ӵ�NULL������ϴε�\0֮��ʼ����һ�����
	{
		printf("%s\n",ret);
	}
	return 0;
}//ͨ��������ȡ�����ַ��ָ������ַ���