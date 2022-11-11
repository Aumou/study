#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "abcd\0xxxxxxxxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 7);//虽然是七个 但是strncat并不会在后面多补零 只会追加world\0
	printf("%s\n", arr1);
	return 0;
}