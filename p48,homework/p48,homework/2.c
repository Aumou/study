#include<stdio.h>
int main()
{
	unsigned int a = 0x1234;
	unsigned char b = *(unsigned char*)&a;
	printf("%d\n", b);
	return 0;
}
//��32λ���ģʽ�������ϱ���b����0x00
//��&aǿ��ת��Ϊchar*��  ������ֻ��ȡһ���ֽ� ��Ϊ�Ǵ��������  00 00 12 34   С�� 34 12 00 00