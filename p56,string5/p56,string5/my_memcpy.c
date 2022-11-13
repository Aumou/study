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
		++(char*)dest;//((char*)dest)++ ͬһ���ȼ� ���������� ���Ե�++����ʱ ����++��ת������ ��ʱ++��������void* ���Ի����
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
	struct S arr3[] = { {"����",20},{"����",30}};
	struct S arr4[3] = { 0 };
	my_memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}