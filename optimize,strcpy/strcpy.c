#include<stdio.h>

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//#include<assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit" ;
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//	return 0;
//}
#include<assert.h>

char *my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(*dest != NULL);
	assert(*src != NULL);
	{
		//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
		while (*dest++ = *src++)
		{
			;
		}
	}
	return ret;
}
int main()
{
	char arr1[] = "#############";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}