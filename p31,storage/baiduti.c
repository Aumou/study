#include<stdio.h>
//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}

//дһ��������ʵ��
int check_sys(void)
{
	int a = 1;
	return   *(char*)&a;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}