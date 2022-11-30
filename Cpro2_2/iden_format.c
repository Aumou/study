#include <stdio.h>
//isalpha函数可以判断是否为字母 是字母返回1 不是字母返回0
int main()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
		getchar();
	}
	return 0;
}