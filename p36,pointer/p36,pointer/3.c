#include<stdio.h>
void tets(char ** pp)
{}
//二级指针可以接收的形式   二级指针：存放一级指针的地址
int mani()
{
	char ch = 'W';
	char* p = &ch;
	char** pp = p;
	char* arr[5];
	test(pp);
	tets(&p);
	test(arr);
	return 0;
}
