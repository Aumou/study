#include<stdio.h>
#include<Windows.h>

unsigned char i = 0;
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
		Sleep(100);
	}
	return 0;
}
//�޷�������char�ķ�Χ��-128 -- 127