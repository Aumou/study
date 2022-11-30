#include <stdio.h>

int main()
{
	char arr[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%c",arr[i]);
	}
	return 0;
}