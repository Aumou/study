#include <stdio.h>

int main()
{
	union
	{
		short k;//2
		char i[2];//2
	}*s,a;//联合体的大小最小为 其中最大的那个变量的大小 2
	s = &a;
	s->i[0]=0x39;
	s->i[1]=0x38;
	printf("%#x\n", a.k);//0x3839
	return 0;
}