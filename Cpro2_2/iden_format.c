#include <stdio.h>
//isalpha���������ж��Ƿ�Ϊ��ĸ ����ĸ����1 ������ĸ����0
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