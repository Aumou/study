#include<stdio.h>
int main()
{
	//strlen ���� ��Ҫ���յ���һ����ַ Ȼ��Ӹõ�ַ��ʼ���Ѱ��/0
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//���ֵ   ���ַ������д�ŵ���һ��һ���ַ��������ַ���ʱ ��������û��\0�� ����strlen��һֱ����ȥ
	printf("%d\n", strlen(arr+0));//���ֵ   ����Ԫ�صĵ�ַ��ʼ�� �ȼ��ڵ�һ��
	//printf("%d\n", strlen(*arr));//err �Ƿ�����  strlen��Ҫ���յ��ǵ�ַ �˴�����aԪ�� ASCII��Ϊ97 ��strlen��ӵ�ַΪ97�ĵط���ʼ��/0 ���ڷǷ����� �������ᱨ��
	printf("%d\n", strlen(arr[1]));//err  �����ǵڶ���Ԫ�� ��ͬ���� �Ƿ�����
	printf("%d\n", strlen(&arr));//���ֵ ��������ĵ�ַ ͬһ
	printf("%d\n", strlen(&arr+1));//���ֵ �������������ĵ�һ��λ�õĵ�ַ
	printf("%d\n", strlen(&arr[0]+1));//���ֵ  �ڶ���Ԫ�صĵ�ַ��ʼ��/0
	//printf("%d\n", sizeof(arr));  //6  ��������Ĵ�С   char���� һ��Ԫ�صĴ�СΪ1�ֽ�  6*1=6�ֽ�
	//printf("%d\n", sizeof(arr+0));  //4/8  ��Ԫ�صĵ�ַ 4/8�ֽ�
	//printf("%d\n", sizeof(*arr));   //1  ��Ԫ�صĴ�С 1�ֽ�
	//printf("%d\n", sizeof(arr[1]));  //1   �ڶ���Ԫ�صĴ�С   1�ֽ�
	//printf("%d\n", sizeof(&arr));  //4/8 ��������ĵ�ַ 4/8
	//printf("%d\n", sizeof(&arr+1));//4/8  ���������������һ��λ�õĵ�ַ 4/8�ֽ�
	//printf("%d\n", sizeof(&arr[0]+1));//4/8  �ڶ���Ԫ�صĵ�ַ 4/8�ֽ�1
	return 0;}