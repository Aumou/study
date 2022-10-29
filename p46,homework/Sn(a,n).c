#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int ret = 0;
	int sum = 0;
	scanf("%d%d", &a, &n);
	for (int i = 0; i < n; i++)
	{
		ret = a + ret * 10;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}