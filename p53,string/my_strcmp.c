#include<stdio.h>
#include<string.h>

//int main()
//{
//	char* p1 = "abcd";
//	char* p2 = "qbcd";
//	int ret = strcmp(p1, p2);
//	if (ret > 0)
//	{
//		printf("q1>q2\n");
//	}
//	if (ret == 0)
//	{
//		printf("p1==p2\n");
//	}
//	if (ret < 0)
//	{
//		printf("p1<p2\n");
//	}
//	return 0;
//}


int my_strcmp(char* str1, char* str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	/*if (*str1 > *str2)
		return 1;
	else
		return -1;*/
	return(*str1 - *str2);
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcde";
	int ret = my_strcmp(p1, p2);
	printf("%d\n", ret);
	return 0;
}