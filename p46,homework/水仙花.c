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
		//判断i的位数
		while (tmp/=10)
		{
			n++;
		}
		//每一位数*n次方求和
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);//pow计算次方的函数 在math.h中
			tmp /= 10;
		}
		//判断次方和是否等于i的值
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}