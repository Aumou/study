#include <stdio.h>
//柔型数组的写法 比用指针实现的更加完美
//1.用指针的写法需要多次用malloc开辟空间 进而需要多次使用free释放动态内存  而free的使用顺序是容易出现错误的
//2.malloc开辟空间 会根据大小开辟 空间的不大不小会导致malloc每次开辟的空间并不连续  而realloc可直接在需追加的空间后追加空间 为连续的空间   更方便cpu对内存的读取 代码运行的效率更高
struct S
{
	int i;
	int arr[0];//未知大小的柔性数组成员 数组大小可以调整
	//int arr[];  结构体中的柔性数组可以定义大小为0 也可以不写
	//柔性数组之前必须存在至少一个其他成员
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->i = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;//ptr指向新的整个空间的首位
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i]=i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}