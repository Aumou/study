#include <stdio.h>
#define DEBUG 1

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
#ifdef DEBUG
		printf("%d ", arr[i]);//��Щ����ɾ����ϧ ��������  ʹ��ifdef����ѡ���Ա���
#endif // DEBUG
	}
	return 0;
}