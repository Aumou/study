#include<stdio.h>
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;

//����p ��ֵΪ0x100000.  ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//һ�μ�20���ֽ�  ��20��Ϊ16���� �ӽ�ȥ 0x00100014
	printf("%p\n", (unsigned long)p + 0x1);//��pǿ��ת��Ϊ��������  �Ƚ�1000000��Ϊʮ���ƺ��1 �൱��ֱ�Ӽ�1  0x00100001
	printf("%p\n", (unsigned int*)p + 0x1);//��pǿ��ת��Ϊ����ָ��  ��1�൱���ĸ��ֽ� 0x00100004 ��Ϊp�ѱ�ǿ��ת��Ϊint* ����ֱ�Ӽ� �����Ƚ�16����ת��Ϊ10����
	return 0;
}