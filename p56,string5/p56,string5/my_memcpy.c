#include<stdio.h>
#include<assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;//((char*)dest)++ 同一优先级 自右向左结合 所以当++后置时 会先++再转换类型 这时++还是用于void* 所以会出错
		++(char*)src;
	}
	return ret;
}

struct S
{
	char name[50];
	int age;
};
int main()
{
	struct S arr3[] = { {"张三",20},{"李四",30}};
	struct S arr4[3] = { 0 };
	my_memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}