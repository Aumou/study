#include <stdio.h>
#define MAX(X,Y)  ((X)>(Y)?(X):(Y))//�궨�� ���滻�ټ���

int main()
{
	int a = 10;
	int b = 11;

	int max = MAX(a++, b++);
	//int max = ((a++) > (b++) ? (a++) : (b++));  ���жϵ�aС��b�� a��b���Ӽ�  ��ʱaΪ11 bΪ12 Ȼ��b����max  ��ʱ��b�Ӽ� bΪ13 aû�л���ڶ��μӼ�
	printf("%d\n", max);//12
	printf("%d\n", a);//11
	printf("%d\n", b);//13
	return 0;
}