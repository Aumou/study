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
		printf("找不到子串\n");
	}
	else if (ret == 10)
	{
		printf("p2为空字符串\n");
	}
	else
	{
	    printf("%s\n", ret);
	}
	return 0;
}//正确的my_strstr
//查找一个短字符串在一个长字符串中的位置 如果存在则取对应的短字符串的第一个内容开始一直到长字符串结束