#include <stdio.h>
//用移位实现2的n次方计算
int main()
{
	int n = 0;
	while ((scanf_s("%d", &n)) != EOF)
	{
		printf("%d\n", 1 << n);
	}
	return 0;
}