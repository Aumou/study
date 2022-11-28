#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	FILE* p = fopen("test.txt", "w");
	if (p == NULL)
	{
		return 0;
	}
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(p, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
		printf("%s\n", __FUNCTION__);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	fclose(p);
	p = NULL;
	return 0;
}