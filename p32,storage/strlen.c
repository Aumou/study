#include<stdio.h>
int main()
{
	char arr[10] = { 1,2,3,4,0,5,6 };
	printf("%d\n", strlen(arr));
	return 0;
} 
//�˴������ڲ���strlen��ֹͣ����
//��֪���Ϊ\0��0������ʹstrlenֹͣ ��Ϊ���ǵ�ASCII�붼Ϊ0