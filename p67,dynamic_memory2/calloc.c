#include<stdio.h>
#include<errno.h>
#include<string.h>

int main()
{
	int* p = (int*)calloc(10, sizeof(int));//相较于malloc而言 calloc会先对该空间进行初始化 所以malloc效率高  而calloc会初始化 各有千秋
	if (NULL == p)
	{
		printf("%S\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;
	return 0;
}