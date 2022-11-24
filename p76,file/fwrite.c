#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct S
{
	char name[20];
	int age;
	double score;
};
int main()
{
	//struct S s = { "张三",20,55.6 };
	struct S tmp = { 0 };
	FILE* p = fopen("test.txt", "rb");
	if (p == NULL)
	{
		return 0;
	}
	//以二进制形式输出
	//fwrite(&s, sizeof(struct S)/*元素大小*/, 1/*元素个数*/, p);

	//以二进制形式输入
	fread(&tmp, sizeof(struct S), 1, p);
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
	fclose(p);
	p = NULL;
	return 0;
}