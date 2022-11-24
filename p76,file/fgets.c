#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fputs
int main()
{
	char buf[1024] = { 0 };
	fgets(buf, 1024, stdin);//从标准输入流获取
	fputs(buf, stdout);//输出到标准输出流
	return 0;
}