#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct Stu
{
	int id;
	float score[3];
};

int main()
{
	struct Stu s = { 0 };
	scanf("%d;%f,%f,%f", &s.id, s.score,&(s.score[1]),&(s.score[2]));
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f", s.id, *s.score, s.score[1], s.score[2]);
	return 0;
} 