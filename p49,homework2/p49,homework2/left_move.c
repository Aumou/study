//��Ŀ
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#include<string.h>
#include<stdio.h>
#include<assert.h>

//void left_move(char arr[], int k)
//{
//	assert(arr);//�ж�arr�Ƿ�Ϊ��ָ��
//	int i = 0;
//	int len=strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

void reverse(char *left,char *right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char arr[], int k)
{
	int len = strlen(arr);
	assert(k < len);
	reverse(arr,arr+k-1);
	reverse(arr+k,arr+len-1);
	reverse(arr,arr+len-1);
}

int main()
{
	char arr[] = {"abcdef"};
	left_move(arr, 5);
	printf("%s\n", arr);
	return 0;
}