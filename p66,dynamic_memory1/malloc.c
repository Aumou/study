#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main()
{
	//向内存申请整形的空间
	int* p = (int*)malloc(INT_MAX);
	if (NULL == p)
	{
		//打印错误原因的一个方式
		printf("%s\n",strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;//当空间被还回去之后 p会变成野指针 可能会改变该地址的值 存在风险
	return 0;
}