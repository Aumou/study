#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//格式化的输出数据
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	//格式化的输入数据
//	fscanf(pf, "%d%f%s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s\n",s.n,s.score,s.arr);
//	fclose(pf);
//	pf = NULL;
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//	return 0;
//}

struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	char buf[1024] = { 0 };
	struct S s = { 100,3.14f,"bit" };
	struct S tmp = { 0 };
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	printf("%s\n", buf);
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
	return 0;
}