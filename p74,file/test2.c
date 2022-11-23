#include <stdio.h>
int main()
{
	FILE* p = fgetc(stdin);
	fputc(p,stdout);
	return 0;
}