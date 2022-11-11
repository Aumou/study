#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "abcdq";
	int ret = strncmp(arr1, arr2, 5);
	printf("%d\n", ret);
	return 0;
}