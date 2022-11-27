#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	FILE* p = fopen("test2.txt", "r");
	if (p == NULL)
	{
		perror("open file test2.txt");
		return 0;
	}

	fclose(p);
	p = NULL;
	return 0;
}