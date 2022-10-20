#include<stdio.h>
char my_strcpy(char* dest, const char* str)
{

}

int main()
{
	char (*pf)(char*,const char*)=my_strcpy;
	char (*pfarr[4])(char*,const char*);
	return 0;
}