#include<stdio.h>
int Add(int a, int b)
{
	int z = a + b;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int (*pa)(int, int)=Add;
	printf("%d\n", pa(2, 3));
	printf("%d\n", (*pa)(2, 3));
	printf("%d\n", Add(2, 3));
	printf("%d\n", (**pa)(2, 3));
	//������������Ǻ����ĵ�ַ ����pa()�����õ�ͬ��Add()
	//��(*pa)�����ͨ��pa�д�ŵĵ�ַ�����ҵ���Ӧ�ĺ���ʵ��Ч����ͬ��pa��Add
	//(**pa)��(***pa)ͬ�� ͨ����ַ�ͽ����õ�ַ������ʹ�ú���
	return 0;
}