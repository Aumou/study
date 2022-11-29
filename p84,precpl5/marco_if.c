#include <stdio.h>
//#if为真则执行语句 不为真则不执行

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#if 1
//		printf("%d ", arr[i]);
//#endif // 1
//
//	}
//	return 0;
//}


//分支语句
//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elseif 2 == 3
//	printf("hehe\n");
//#else
//	printf("嘿嘿\n");
//#endif
//	return 0;
//}

#define DEBUG 1
int main()
{
//#if defined(DEBUG)
//	printf("haha\n");
//#endif
////等价于
//#ifdef DEBUG
//	printf("haha\n");
//#endif

//#if ! defined(DEBUG)
//	printf("hehe\n");
//#endif
//等价于
#ifndef DEBUG
	printf("hehe\n");
#endif
	return 0;
}