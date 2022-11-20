#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1.GetMemory传递的是str而不是str的地址 则该函数无法改变该值
//2.没有使用free释放空间 会出现内存泄漏的情况
//3.对NULL空指针进行解引用 会报错
//void GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

void GetMemory(char* *p)
{
	*p = (char*)malloc(100);
}

void Test()
{
	char* str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
}

int main()
{
	Test();
	return 0;
}