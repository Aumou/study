#include <stdio.h>
//结构体中使用: 表示位段 若无冒号则占对应的大小 有冒号则占冒号后对应的位数 当八位不够用时再开辟新的空间  使用空间时从低地址到高地址 从低位到高位  地址看字节  字节看位数
int main()
{
	unsigned char arr[4];
	struct S
	{
		unsigned char u1;
		unsigned char u2 : 1;
		unsigned char u3 : 2;
		unsigned char u4 : 3;
	}*s;
	s = (struct S*)arr;
	memset(arr, 0, 4);
	s->u1 = 2;
	s->u2 = 3;
	s->u3 = 4;
	s->u4 = 5;
	printf("%02x %02x %02x %02x", *arr, arr[1], arr[2], arr[3]);
	return 0;
}