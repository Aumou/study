#include <stdio.h>
#define MULTIFY(X) ((X)*(X))

//int main()
//{
//	int ret = MULTIFY(5+1);
//	printf("%d\n", ret);
//	return 0;
//}

#define PRINT(X) printf("the value of "#X" is %d\n",X)//�궨���е�# ����X��Ӧ�����ݱ�ɶ�Ӧ�ķ���
int main()
{
	int a = 10;
	int b = 20;
	PRINT(a);
	PRINT(b);
	return 0;
}