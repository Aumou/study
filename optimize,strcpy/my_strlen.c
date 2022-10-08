#include<stdio.h>
#include<assert.h>

int my_strlen(const char* arr)
{
	assert(*arr != NULL);
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[] = "abcde";
	printf("%d\n", my_strlen(arr));
	return 0;
}