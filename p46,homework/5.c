#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	//打印前半部分加中心轴
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - i - 1; j++)
		{
			printf(" ");//打印空格
		}
		for (j = 0; j <2*i+1;j++)
		{
			printf("*");//打印*
		}
		printf("\n");
	}
	//打印后半部分
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");//空格
		}
		for (j = 0; j < (line-1-i)*2-1; j++)
		{
			printf("*");//*
		}
		printf("\n");
	}
	return 0;
}