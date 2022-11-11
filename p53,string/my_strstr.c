#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char *p1 = "abcdefghidef";
//	char* p2 = "def";
//	int ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//		printf("%s\n", ret);
//	return 0;
//}

char* my_strstr(const char *p1, const char *p2,const int len)
{
	assert(p1 && p2);
	char* pp1 = NULL;
	char* pp2 = NULL;
	int count = 0;
	do
	{
		if (*p1 == *p2)
		{
			pp1 = p1;
			pp2 = p1;
			break;
		}
	} while (*p1++!='\0');

	while (*p2 != '\0')
	{
		if (*pp1 == *p2)
		{
			pp1++;
			p2++;
			count++;
		}
		else
			break;
	}
	if (count == len)
	{
		return pp2;
	}
	else
		return NULL;
}

int main()
{
	char *p1 = "abcdefghidef";
	char *p2 = "def";
	int len = strlen(p2);
	int ret = my_strstr(p1, p2,len);
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
		printf("%s\n", ret);
	return 0;
}//自己写的 有问题 只考虑了p1的第一个关键字