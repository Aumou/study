#include <stdio.h>
#include<stdlib.h>

int main()
{
	//1.��NULL���н����ò���
	//int* p = malloc(40);
	//*p = 10;//������ٿռ�ʧ�ܵĻ� �ͻ������ʧ��
	//return 0;
	
	
	//2.�Զ�̬�����ڴ��Խ�����
	/*int* p = (int*)malloc(40);
	if (NULL == *p)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i <=10; i++)
		{
			*(p + i) = i;
		}
	}
	free(p);
	p = NULL;*/


	//3.�ԷǶ�̬�ڴ�ʹ��free�ͷ�
	/*int a = 10;
	int* p = &a;
	free(p);
	p = NULL;*/


	//4.ʹ��freeʹ�ö�̬�����ڴ��һ����
	//p���Լ� ��ѭ������֮�� p����ָ��ÿռ��׵�ַ ��ʱʹ��free��;�ͷ��Ǵ����
	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*p++ = i;
		}
	}
	free(p);
	p = NULL;


	//4.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		return 0;
	}
	free(p);
	free(p);//�����һ���ͷ�֮�� ��NULL����p���ͷŵڶ��� ��ʱ���ᱨ��


	//6.���ٶ�̬�ڴ������ͷţ��ڴ�й¶��
	while (1)
	{
		malloc(1);
	}//�᲻��ռ�õ����ڴ� ���ܵ�������

	return 0;
}