#include<stdio.h>

int main()
{
	char* c = { "ENTER","NEW","POINT","FIRST" };
	char* *cp[] = { c + 3,c + 2,c + 1,c };
	char** *cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER ����cpp�Ѿ�++һ�� ����cpp��ʱָ��c+2 �ٴ�++ָ��c+1 ������cpp�õ� c+1���ݺ� -- �õ�c �ٽ����õõ�E�ĵ�ַ E�ĵ�ַ��3 �õ�E�ĵ�ַ ��ӡ��ER
	printf("%s\n", *cpp[-2] + 3);//NT
	printf("%s\n", cpp[-1][-1] + 1);//EW  *(*(cpp-1)-1) 
	return 0;
}