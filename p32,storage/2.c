#include<stdio.h>
#include<Windows.h>
int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		Sleep(100);
	}
	return 0;
}

//9 8 7 6 5 4 3 2 1 0
//-1:10000000 00000000 00000000 00000001(转为无符号数为正数 可无限循环）
//-1为有符号数 存放形式应从原码转为补码
//-1:11111111 11111111 11111111 11111111
//打印的是无符号形式的-1的补码  4,294,967,295