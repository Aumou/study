#include <stdio.h>
#define MAX 100
int main()
{
	printf("MAX=%d\n", MAX);
#undef MAX //�Ƴ�һ���궨��
	printf("MAX=%d\n", MAX);
	return 0;
}