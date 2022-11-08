#include<stdio.h>
#include<assert.h>

void my_strcpy(char* arr1, char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (*arr1++ = *arr2++)
	{
		;
	}
}

int main()
{
	char arr1[] = { "abcdef" };
	char arr2[] = { "bit" };
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}