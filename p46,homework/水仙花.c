#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		int sum = 0;
		int tmp = i;
		int n = 1;
		//�ж�i��λ��
		while (tmp/=10)
		{
			n++;
		}
		//ÿһλ��*n�η����
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);//pow����η��ĺ��� ��math.h��
			tmp /= 10;
		}
		//�жϴη����Ƿ����i��ֵ
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}