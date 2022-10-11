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
//无符号数的char的范围在-128 -- 127