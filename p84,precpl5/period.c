#include <stdio.h>
//�ṹ����ʹ��: ��ʾλ�� ����ð����ռ��Ӧ�Ĵ�С ��ð����ռð�ź��Ӧ��λ�� ����λ������ʱ�ٿ����µĿռ�  ʹ�ÿռ�ʱ�ӵ͵�ַ���ߵ�ַ �ӵ�λ����λ  ��ַ���ֽ�  �ֽڿ�λ��
int main()
{
	unsigned char arr[4];
	struct S
	{
		unsigned char u1;
		unsigned char u2 : 1;
		unsigned char u3 : 2;
		unsigned char u4 : 3;
	}*s;
	s = (struct S*)arr;
	memset(arr, 0, 4);
	s->u1 = 2;
	s->u2 = 3;
	s->u3 = 4;
	s->u4 = 5;
	printf("%02x %02x %02x %02x", *arr, arr[1], arr[2], arr[3]);
	return 0;
}