#include<stdio.h>

#pragma pack(1)//����vsĬ�ϵĶ�����8Ϊ�����е���
struct S1
{
	char a;
	double b;
};
#pragma pack()//ȡ�����õ�Ĭ�϶����� ����ΪĬ�� �������ϵ��¶� struct S1�����ȡ�� ����S1�����Զ�����1���洢

int main()
{
	printf("%d\n", sizeof(struct S1));
	return 0;
}