#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1.GetMemory���ݵ���str������str�ĵ�ַ ��ú����޷��ı��ֵ
//2.û��ʹ��free�ͷſռ� ������ڴ�й©�����
//3.��NULL��ָ����н����� �ᱨ��
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