#include<stdio.h>

union Un
{
	char c;
	int i;
};

//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	printf("%p\n", &u);
//	return 0;
//}

int check_sys()
{
	union Un
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
		printf("���\n");
	return 0;
}