#include<stdio.h>
int main()
{

	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err a ASCII
	//printf("%d\n", strlen(arr[1]));//err ������b��ASCII�� 98 strlen�ӵ�ַΪ98�ĵط���ʼ��/0 ����Խ�����
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}
