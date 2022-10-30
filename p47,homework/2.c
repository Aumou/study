#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float bot = 0;
	int mon = 0;
	int num = 0;
	scanf("%d", &mon);
	while (mon)
	{
		mon--;
		num++;
		bot += 0.5;
		if (bot - (int)bot == 0)
		{
			num++;
			bot += 0.5;
		}
	}
	printf("%d\n", num);
	return 0;
}