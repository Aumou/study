#include<stdio.h>
//int main()
//{
//	const int n = 10;
//	int* p = &n;
//	*p = 100;
//	printf("%d\n", n);
//	return 0;
//}
//ͨ��ָ����Ȼ���Ը�ֵ

//int main()
//{
//	const int n = 10;
//	const int* p = &n;
//	*p = 100;
//	printf("%d\n", n);
//	return 0;
/*}*///��ָ����߼���const�� �޷��޸�nֵ

int main()
{
	const int n = 10;
	int*const p = &n;
	int m = 98;
	p = &m;
	printf("%d\n", n);
	return 0;
}