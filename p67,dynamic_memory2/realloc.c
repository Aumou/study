#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	int* p = (int*)malloc(5*sizeof(int));
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	//使用malloc开辟了20个字节的空间
	//假设此处20个字节的空间不够使用 希望有40个字节的空间供我们使用
	//用realloc来调整动态开辟的内存
	//1.如果realloc开辟的只是一个小空间 在之前已开辟的空间后有足够的空间 那么会直接追加
	//2.如果之后没有足够的空间 那么realloc会重新开辟一块大的空间 并将之前的数据复制到新的空间中 并删除之前空间的数据 同时会释放之前的那一块空间
	//3.如果申请的空间太大 那么realloc会返回一个空指针 所以需要一个中间值先进行判断是否开辟成功
	int* ptr = realloc(p, 40);
	if (NULL == ptr)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		p = ptr;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i)); 
		}
	}
	free(p);
	p = NULL;
	return 0;
}
