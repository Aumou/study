#include<stdio.h>
void tets(char ** pp)
{}
//����ָ����Խ��յ���ʽ   ����ָ�룺���һ��ָ��ĵ�ַ
int mani()
{
	char ch = 'W';
	char* p = &ch;
	char** pp = p;
	char* arr[5];
	test(pp);
	tets(&p);
	test(arr);
	return 0;
}
