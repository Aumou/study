#include <stdio.h>
//����λʵ��2��n�η�����
int main()
{
	int n = 0;
	while ((scanf_s("%d", &n)) != EOF)
	{
		printf("%d\n", 1 << n);
	}
	return 0;
}