#include <stdio.h>
#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int Max(int x, int y)
{
	return (x > y ? x : y);
}


int main()
{
	int a = 10;
	int b = 20;
	printf("max=%d\n", Max(a, b));//�����ڵ���ʱ ���к����ĵ��úͷ��صĿ���
	printf("max=%d\n", MAX(a, b));//Ԥ����׶ξ�������滻 û�к����ĵ��úͷ��صĿ���
	return 0;
}