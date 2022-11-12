#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "www.tencent@qq.com";
	char* pa = ".@";
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	char* ret = NULL;
	for (ret = strtok(arr, pa); ret != NULL; ret=strtok(NULL, pa))//调用这个函数时 会记住上一次\0的位置 所以第二次直接传NULL后会在上次的\0之后开始找下一个标记
	{
		printf("%s\n",ret);
	}
	return 0;
}//通过函数来取出被字符分隔开的字符段