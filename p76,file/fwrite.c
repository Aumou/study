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
	//struct S s = { "����",20,55.6 };
	struct S tmp = { 0 };
	FILE* p = fopen("test.txt", "rb");
	if (p == NULL)
	{
		return 0;
	}
	//�Զ�������ʽ���
	//fwrite(&s, sizeof(struct S)/*Ԫ�ش�С*/, 1/*Ԫ�ظ���*/, p);

	//�Զ�������ʽ����
	fread(&tmp, sizeof(struct S), 1, p);
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
	fclose(p);
	p = NULL;
	return 0;
}