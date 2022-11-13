#include<stdio.h>
//my_memmove Ӧ���ǵ������������ص������ �������������
void* my_memmove(void* dest, void* src, size_t num)
{
	int tnum = num-4 ;//��Ϊ��С�˴洢���Բ���Ҫѭ��12��
	void* ret = dest;
		if ((int)src < (int)dest)
		{
			char* tmp1 = (char*)dest + 8;
			char* tmp2 = (char*)src + 8;
			do
			{
				*tmp1 = *tmp2;
				tmp1--;
				tmp2--;
			} while (tnum--);
				/*--(char*)dest;
				--(char*)src;*/
		}
		else if ((int)src > (int)dest)
		{
			do
			{
				*(char*)dest = *(char*)src;
				++(char*)dest;
				++(char*)src;
			} while (tnum--);
		}
		return ret;
}

int main()
{
	int arr[10] = { 111,222,333,444,555,666,777,888,999,100 };
	my_memmove(arr+2, arr+3, 12);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	/*printf("%p\n", *((char*)arr+12));
	printf("%p\n", *arr);*/
	//printf("%d\n", *((char*)arr+8));
	return 0;
}