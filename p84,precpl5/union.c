#include <stdio.h>

int main()
{
	union
	{
		short k;//2
		char i[2];//2
	}*s,a;//������Ĵ�С��СΪ ���������Ǹ������Ĵ�С 2
	s = &a;
	s->i[0]=0x39;
	s->i[1]=0x38;
	printf("%#x\n", a.k);//0x3839
	return 0;
}