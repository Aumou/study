
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void menu()
{
	printf("\n");
	printf("*********************\n");
	printf("**1.Add       2.Sub**\n");
	printf("**3.Mul       4.Div**\n");
	printf("***     0.exit    ***\n");
	printf("*********************\n");
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

void Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个数:>");
	scanf("%d%d", &x, &y);
	printf("计算结果为:> %d\n", pf(x, y));
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);


		switch (input)
		{
		case 0:
			printf("退出");
			break;
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}