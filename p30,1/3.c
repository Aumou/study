#include<stdio.h>
int main()
{
	printf("%d\n", 1 - 1);
	//�����ֻ�мӷ��� ֻ���Լ���ӷ� �ڼ���1-1ʱ��תΪ1+��-1��

	//�����ڼ���������Բ������ʽ�洢��
	//1    �����������붼��ͬ��ͬ�޷�������
	//00000000000000000000000000000001 ԭ��
	//00000000000000000000000000000001 ����
	//00000000000000000000000000000001 ����
	
    //-1
	//10000000000000000000000000000001
	//11111111111111111111111111111110
	//11111111111111111111111111111111
	
	//��1+��-1��
	//00000000000000000000000000000001
	//11111111111111111111111111111111
	//100000000000000000000000000000000(ֻ��32λ ��һλ��ȥ��
	//00000000000000000000000000000000   =  1+(-1)
	return 0;
}