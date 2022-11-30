#include <stdio.h>


//需要一个数字一个数字输入
int main()
{
    int arr[3] = { 0 };
    scanf_s("%4d%2d%2d", arr,&arr[1],&arr[2]);
    printf("year=%4d\n", *arr);
    printf("month=%02d\n", arr[1]);
    printf("date=%02d\n", arr[2]);
    return 0;
}

//%02d表示宽度为2的右对齐 且空位补0
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	scanf_s("%4d%2d%2d", &y,&m,&d);
//	printf("year=%4d\n", y);
//	printf("month=%02d\n", m);
//	printf("date=%02d\n", d);
//	return 0;
//}