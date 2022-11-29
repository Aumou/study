#include <stdio.h>
#define DEBUG 1

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
#ifdef DEBUG
		printf("%d ", arr[i]);//有些代码删除可惜 保留碍事  使用ifdef可以选择性编译
#endif // DEBUG
	}
	return 0;
}