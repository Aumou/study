#include<stdio.h>
//int main()
//{
//	const int n = 10;
//	int* p = &n;
//	*p = 100;
//	printf("%d\n", n);
//	return 0;
//}
//通过指针依然可以改值

//int main()
//{
//	const int n = 10;
//	const int* p = &n;
//	*p = 100;
//	printf("%d\n", n);
//	return 0;
/*}*///给指针左边加入const后 无法修改n值

int main()
{
	const int n = 10;
	int*const p = &n;
	int m = 98;
	p = &m;
	printf("%d\n", n);
	return 0;
}