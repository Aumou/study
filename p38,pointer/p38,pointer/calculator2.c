#define  _CRT_SECURE_NO_WARNINGS //define������ڵ�һ�з����޷���Ч
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
}//��� ����ֵ��ͬ���Ϊ�� ��ͬ���Ϊ1
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;//parr��һ������ָ������ ----- ת�Ʊ�
	int (*parr[])(int, int) = {0,Add,Sub,Mul,Div,Xor};
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("������������:>");
			scanf("%d%d", &x,&y);
			int ret = parr[input](x, y);
			printf("������Ϊ:>%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
			printf("ѡ�����\n");
	} while (input);
	return 0;
}