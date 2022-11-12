#include<stdio.h>
#include<assert.h>
#include<string.h>

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	if (!*p2)
	{
		return 10;
	}
	while (strlen(cur)>=strlen(p2))
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1  && *s2  && !(*s1 - *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}

int main()
{
	char* p1 = "abcdghydefuiobnm";
	char* p2 = "def";
	int ret = my_strstr(p1, p2);
	if(ret==NULL)
	{
		printf("�Ҳ����Ӵ�\n");
	}
	else if (ret == 10)
	{
		printf("p2Ϊ���ַ���\n");
	}
	else
	{
	    printf("%s\n", ret);
	}
	return 0;
}//��ȷ��my_strstr
//����һ�����ַ�����һ�����ַ����е�λ�� ���������ȡ��Ӧ�Ķ��ַ����ĵ�һ�����ݿ�ʼһֱ�����ַ�������