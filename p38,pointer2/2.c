#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[10];
	int* p[10];//��һ������------ָ������
	int(*p1)[10]=&arr;//��һ��ָ��----����ָ��   ȡ������ĵ�ַ

	int(*p2[10])(int, int);//һ������----����ָ������
	int(*(*p3[10])(int, int))=&p2;//һ��ָ��-----ָ����ָ�������ָ�� ָ���������10��Ԫ��
	//ÿ��Ԫ�ض��Ǻ���ָ�� ÿ��Ԫ�ص�����Ϊint(*)(int,int)
	return 0;
}