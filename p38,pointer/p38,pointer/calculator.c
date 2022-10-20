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

int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
	

		switch (input)	
		{
		case 1:
			printf("请输入两个操作数:>");
			scanf_s("%d%d", &x, &y);
			printf("计算结果为:>%d\n", Add(x, y));
			break;
		case 2:
			printf("请输入两个操作数:>");
			scanf_s("%d%d", &x, &y);
			printf("计算结果为:>%d\n", Sub(x, y));
			break;
		case 3:
			printf("请输入两个操作数:>");
			scanf_s("%d%d", &x, &y);
			printf("计算结果为:>%d\n", Mul(x, y));
			break;
		case 4:
			printf("请输入两个操作数:>");
			scanf_s("%d%d", &x, &y);
			printf("计算结果为:>%d\n", Div(x, y));
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}