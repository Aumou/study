#include <stdio.h>
//���������д�� ����ָ��ʵ�ֵĸ�������
//1.��ָ���д����Ҫ�����malloc���ٿռ� ������Ҫ���ʹ��free�ͷŶ�̬�ڴ�  ��free��ʹ��˳�������׳��ִ����
//2.malloc���ٿռ� ����ݴ�С���� �ռ�Ĳ���С�ᵼ��mallocÿ�ο��ٵĿռ䲢������  ��realloc��ֱ������׷�ӵĿռ��׷�ӿռ� Ϊ�����Ŀռ�   ������cpu���ڴ�Ķ�ȡ �������е�Ч�ʸ���
struct S
{
	int i;
	int arr[0];//δ֪��С�����������Ա �����С���Ե���
	//int arr[];  �ṹ���е�����������Զ����СΪ0 Ҳ���Բ�д
	//��������֮ǰ�����������һ��������Ա
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->i = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;//ptrָ���µ������ռ����λ
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i]=i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}