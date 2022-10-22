#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int i[10] = { 4,2,3,7,8,0,1,9,6,5 };
	int sz = sizeof(i) / sizeof(i[0]);
	qsort(i, sz, sizeof(i[0]), cmp_int);
	for (int n = 0; n < sz; n++)
	{
		printf("%d ", i[n]);
	}
}

int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
}
void test2()
{
	float f[5] = { 4.0,9.0,8.0,3.0,5.0};
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	for (int n = 0; n < sz; n++)
	{
		printf("%f ", f[n]);
	}
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3()
{
	struct Stu s[3]= { {"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}