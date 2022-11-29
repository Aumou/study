#include <stdio.h>
#define MAX(X,Y)  ((X)>(Y)?(X):(Y))//宏定义 先替换再计算

int main()
{
	int a = 10;
	int b = 11;

	int max = MAX(a++, b++);
	//int max = ((a++) > (b++) ? (a++) : (b++));  先判断当a小于b后 a和b都加加  此时a为11 b为12 然后将b赋给max  此时给b加加 b为13 a没有机会第二次加加
	printf("%d\n", max);//12
	printf("%d\n", a);//11
	printf("%d\n", b);//13
	return 0;
}