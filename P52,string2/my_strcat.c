#include<stdio.h>
#include<assert.h>

void my_strcat(char* dest,const char* sor)
{
	assert(dest);
	assert(sor);
	while (*dest!='\0')
	{
		dest++;
	}
	while (*dest++ = *sor++)
	{
		;
	}
}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}