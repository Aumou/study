#include<stdio.h>
int main()
{
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);
	//���ղ������ʽ�������㣬����ʽ��Ϊ�з�������
	return 0;
}


//10000000 00000000 00000000 00010100ԭ��
//11111111 11111111 11111111 11101011����
//11111111 11111111 11111111 11101100����

//00000000 00000000 00000000 00001010����
//11111111 11111111 11111111 11110110����֮��Ĳ���
//11111111 11111111 11111111 11110101����
//10000000 00000000 00000000 00001010ԭ��