#include <stdio.h>
//#ifΪ����ִ����� ��Ϊ����ִ��

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#if 1
//		printf("%d ", arr[i]);
//#endif // 1
//
//	}
//	return 0;
//}


//��֧���
//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elseif 2 == 3
//	printf("hehe\n");
//#else
//	printf("�ٺ�\n");
//#endif
//	return 0;
//}

#define DEBUG 1
int main()
{
//#if defined(DEBUG)
//	printf("haha\n");
//#endif
////�ȼ���
//#ifdef DEBUG
//	printf("haha\n");
//#endif

//#if ! defined(DEBUG)
//	printf("hehe\n");
//#endif
//�ȼ���
#ifndef DEBUG
	printf("hehe\n");
#endif
	return 0;
}