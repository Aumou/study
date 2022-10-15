#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);
      //printf("%d ", *(*p+i));    *p == arr   p中存的是&arr  解引用之后是arr 为首元素地址
	}
	return 0;
}