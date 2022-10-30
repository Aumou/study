#include<stdio.h>
//将数组中奇数放在前半部分 偶数放在后半部分
void move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)//总循环条件
	{
		//从左边找偶数    如果全是奇数则right不会减  left会一直向前走 所以要有限制条件 left<right限制他在指定数组中找偶数
		while ((left < right) && arr[left] % 2 == 1)
		{
			left++;
		}
		//从右边找奇数
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr,sz);
	return 0;
}