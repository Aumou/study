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
	//��ӡǰ�벿�ּ�������
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - i - 1; j++)
		{
			printf(" ");//��ӡ�ո�
		}
		for (j = 0; j <2*i+1;j++)
		{
			printf("*");//��ӡ*
		}
		printf("\n");
	}
	//��ӡ��벿��
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");//�ո�
		}
		for (j = 0; j < (line-1-i)*2-1; j++)
		{
			printf("*");//*
		}
		printf("\n");
	}
	return 0;
}