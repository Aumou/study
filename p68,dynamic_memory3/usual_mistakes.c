#include <stdio.h>
#include<stdlib.h>

int main()
{
	//1.对NULL进行解引用操作
	//int* p = malloc(40);
	//*p = 10;//如果开辟空间失败的话 就会解引用失败
	//return 0;
	
	
	//2.对动态开辟内存的越界访问
	/*int* p = (int*)malloc(40);
	if (NULL == *p)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i <=10; i++)
		{
			*(p + i) = i;
		}
	}
	free(p);
	p = NULL;*/


	//3.对非动态内存使用free释放
	/*int a = 10;
	int* p = &a;
	free(p);
	p = NULL;*/


	//4.使用free使用动态开辟内存的一部分
	//p会自加 当循环结束之后 p不再指向该空间首地址 此时使用free中途释放是错误的
	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*p++ = i;
		}
	}
	free(p);
	p = NULL;


	//4.对同一块动态内存的多次释放
	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		return 0;
	}
	free(p);
	free(p);//如果第一次释放之后 把NULL赋给p再释放第二次 此时不会报错


	//6.开辟动态内存忘记释放（内存泄露）
	while (1)
	{
		malloc(1);
	}//会不断占用电脑内存 可能导致死机

	return 0;
}