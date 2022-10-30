#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int total = 0;
	int empty = 0;
	int money = 0;
	scanf("%d", &money);
	empty = money;
	total = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("total=%d", total);
	return 0;
}