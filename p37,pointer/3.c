#include<stdio.h>
#include<Windows.h>

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
	int* arr[5];
	/*int (*pa)(int, int) = Add;
	��Ҫһ���ܹ�װ�����ֺ����ı���*/
	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������� Add Sub Mul Div����ʼ����
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2, 3));
		Sleep(100);
	}
	return 0;
}