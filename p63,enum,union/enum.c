#include<stdio.h>
//ö��
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

enum Color
{
	RED,
	GREEN,
	BLUE
};

int main()
{
	printf("%d %d %d\n", MALE, FEMALE,SECRET);
	printf("%d %d %d\n", RED, GREEN, BLUE);
	//ö�ٵ�����Ϊ����  ֻ�ܽ��г�ʼ��  ���ܶ���ֵ���и���
	const int a = 10;//�����ڴ�
	return 0;
}