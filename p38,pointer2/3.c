#include<stdio.h>
//�ص������Ѻ�����ָ����Ϊ����������һ�������������ָ�뱻���õ�ʱ�����ָ��ָ��ĺ������ǻص�����
void print(char* str)
{
	printf("hehe:%s\n", str);
}
void test(void (*p)(char*))
{
	printf("test\n");
	p("bit");
}

int main()
{
	test(print);
	return 0;
}