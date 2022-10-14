#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[] = { &a,&b,&c,&d };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%p\n", (arr[i]));
//	}
//	return 0;
//}


int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 2,3,4,5,6,7 };
	int arr3[] = { 3,4,5,6,7,8 };
	int* parr[] = {arr1,arr2,arr3};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i]+j));
		}
		printf("\n");
	}
	return 0;
}
