#include<stdio.h>
int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}
//数组中存放了三个逗号表达式 == {1,3,5} 依次放入二维数组中相当于第一行为 1 3 第二行第一列为5
//a[0]代表的是二维数组第一行的数组名 a[0][0]才是第一行的第一个元素
//则p[0]就是第一行第一个元素
//答案为1