#include<stdio.h>
int main()
{
	(*(void (*)())0)();
	//void (*)()��һ������ָ��   (void(*)())0����int���͵�0ǿ��ת��Ϊ����ָ������ ������֮����Ǻ��� 
	//���������ž��Ǻ�������()
	void(*signal(int, void(*)))();
	//signal(int,void(*))�Ƕ�һ������������ ������Ϊsignal
	//void(*     )()Ϊ����ָ�������
	//���Դ����Ϊһ������ָ��
	typedef void(*pfun_t)();
	//��Ϊ����ָ�������̫���� ���Կ���ʹ��typedef ������ָ�붨��Ϊһ���򵥵�����
	pfun_t signal(int, pfun_t);
	return 0;
}