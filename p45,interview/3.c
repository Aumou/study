#include<stdio.h>
int main()
{
	char* a[] = { "work","at","alibaba" };
	char* *pa = a;//char* *pa  *pa��ʾpa��һ��ָ�� char*��ʾ��ŵ���char*����
	pa++;//������˼Ϊ��Ԫ�صĵ�ַ++ Ҳ���ǵڶ���Ԫ�صĵ�ַ
	printf("%s\n", *pa);
	return 0;
}