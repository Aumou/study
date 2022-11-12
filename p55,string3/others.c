#include<stdio.h>
#include<string.h>
int main()
{
    //char* ch = 'b';
	//int tmp = isdigit(ch);//判断是否是十进制的数0-9 如果是返回一个非零数 如果不是返回零
	//int ret = islower(ch);//判断是不是小写字母a-z 如果是返回非零数 如果不是返回零
	//printf("%d\n", ret);
    //char ch=toupper('q');//将小写字母转换为大写字母
	//char ch = tolower('Q');//将大写字母转换为小写字母
	//putchar(ch);
	int i = 0;
	char arr[] = "I AM A STUDENT";
	while(arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}