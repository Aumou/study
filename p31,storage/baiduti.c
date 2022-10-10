#include<stdio.h>
//写一段代码告诉我们当前机器的字节序是什么
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}

//写一个函数来实现
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
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}