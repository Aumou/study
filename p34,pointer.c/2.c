#include<stdio.h>
int main()
{
	const char* p = "abcdef";//"abcdef"��һ���ַ������� 
	//*p = 'W';
	//�ַ�������Ϊ�������޷����ĵ� �ڶ�������ʱӦ��ǰ�����const������ �Ա�ʾ�޷��ı�
	printf("%c\n", *p);
	printf("%s\n", p);
	return 0;
}