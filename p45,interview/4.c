#include<stdio.h>

int main()
{
	char* c = { "ENTER","NEW","POINT","FIRST" };
	char* *cp[] = { c + 3,c + 2,c + 1,c };
	char** *cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER 首先cpp已经++一次 所以cpp此时指向c+2 再次++指向c+1 解引用cpp得到 c+1内容后 -- 得到c 再解引用得到E的地址 E的地址加3 得到E的地址 打印得ER
	printf("%s\n", *cpp[-2] + 3);//NT
	printf("%s\n", cpp[-1][-1] + 1);//EW  *(*(cpp-1)-1) 
	return 0;
}