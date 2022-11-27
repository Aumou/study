#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	char arr[] = "abcdef";
	//fputs(arr,pf);
	//fseek(pf, -2, SEEK_END);
	int ch = fgetc(pf);//读一个之后 指针会向后跳一 此时偏移量为1
	printf("%d\n", ch);
	//int pos = ftell(pf);//当前该指针相对于首位置的偏移量
	//printf("%d\n", pos);
	rewind(pf);
	ch = fgetc(pf);
	printf("%d\n", ch);
	fclose(pf);
	pf = NULL;
	return 0;
}