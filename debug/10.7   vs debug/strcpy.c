#include<stdio.h>
//void my_strcpy(char* des, char* src)
//{
//	while (*src != '\0')
//	{
//		*des = *src;
//		src++;
//		des++;
//	}
//	*des = *src;
//}
//
//int main()
//{
//	char arr1[] = { "##############" };
//	char arr2[] = { "bit" };
//	my_strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//用数组2内容替换数组1

int main()
{
	char arr1[] = { "##############" };
	char arr2[] = { "bit" };
	int ret = (sizeof(arr2) / sizeof(arr2[0])) - 2;
	int n = 0;
	for (n = 0; n <= ret; n++)
	{
		arr1[n] = arr2[n];
	}
	printf("%s\n", arr1);
	return 0;
}
//将bit覆盖第一个数组前三位
