//A:不是我
//B:是C
//C:是D
//D:C在胡说
//三个人说了真话 1个人说了假话
//判断是谁凶手
#include<stdio.h>
int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer=%c\n", killer);
		}
	}
	return 0;
}