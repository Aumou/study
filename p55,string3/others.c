#include<stdio.h>
#include<string.h>
int main()
{
    //char* ch = 'b';
	//int tmp = isdigit(ch);//�ж��Ƿ���ʮ���Ƶ���0-9 ����Ƿ���һ�������� ������Ƿ�����
	//int ret = islower(ch);//�ж��ǲ���Сд��ĸa-z ����Ƿ��ط����� ������Ƿ�����
	//printf("%d\n", ret);
    //char ch=toupper('q');//��Сд��ĸת��Ϊ��д��ĸ
	//char ch = tolower('Q');//����д��ĸת��ΪСд��ĸ
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