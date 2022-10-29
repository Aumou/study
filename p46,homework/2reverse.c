#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

void reverse(char* str)
{
	assert(str);
	int sz = strlen(str);
	char *left = str;
	char *right = str + sz - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[256] = { 0 };
	//scanf("%s", arr);//scanf函数遇到空格会停下来
	gets(arr);//gets读取一行
	reverse(arr);
	printf("逆序后的字符串:>%s\n", arr);
	return 0;
}