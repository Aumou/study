#include<stdio.h>

union Un
{
	int i;//4 8 4
	char c[5];//1 8 1  
	//5 ��С���������������ı��� ����5�������С ��СӦΪ8
}u;

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}