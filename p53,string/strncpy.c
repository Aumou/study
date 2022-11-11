#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	printf("%s\n", strncpy(arr1, arr2,6));//第三个是多多少就覆盖上去多少 若有效位不够则在后面补零
//	return 0;
//}


void my_strncpy(char arr1[], const char* arr2, int k)
{
	int i = 0;
	int ret = strlen(arr2);
	for (i = 0; i < k; i++)
	{
		if (ret > i)
		{
			arr1[i] = arr2[i];
		}
		else
			arr1[i] = 0;
	}
}
int main()
{
	char arr1[10] = "abcdefgh";
	char arr2[] = "bit";
	my_strncpy(arr1, arr2, 6);
	printf("%s\n",arr1);
	return 0;
}