#define  _CRT_SECURE_NO_WARNINGS //define必须放在第一行否则无法起效
#include<stdio.h>

void menu()
{
	printf("\n");
	printf("***********************\n");
	printf("** 1.Add       2.Sub **\n");
	printf("** 3.Mul       4.Div **\n");
	printf("** 5.Xor       0.exit**\n");
	printf("***********************\n");
	printf("\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}//异或 两个值相同结果为零 不同结果为1
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;//parr是一个函数指针数组 ----- 转移表
	int (*parr[])(int, int) = {0,Add,Sub,Mul,Div,Xor};
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("请输入两个数:>");
			scanf("%d%d", &x,&y);
			int ret = parr[input](x, y);
			printf("计算结果为:>%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
			printf("选择错误\n");
	} while (input);
	return 0;
}