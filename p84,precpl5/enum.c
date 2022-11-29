#include <stdio.h>

int main()
{
	enum
	{
		X1,
		Y1,
		Z1 = 255,
		A1,
		B1,
	};
	enum {enumA=Y1};
	enum {enumB=B1};
	printf("%d %d\n", enumA, enumB);
	return 0;
}