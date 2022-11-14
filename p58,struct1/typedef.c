#include<stdio.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;//typedef 使用typedef后 在variable list处给一个名字 可以代替struct+类型名

int main()
{
	struct Node n1;
	Node n2;
	return 0;
}