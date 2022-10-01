#include<stdio.h>


typedef struct stu
{
	char name[20];
	char age;
	char tele[18];
	char gender[5];
}stu;

void printf1(stu s)
{
	printf("name:%s\n", s.name);
	printf("age:%d\n", s.age);
	printf("tele:%s\n", s.tele);
	printf("gender:%s\n", s.gender);
}

void printf2(stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("name:%d\n", ps->age);
	printf("name:%s\n", ps->tele);
	printf("name:%s\n", ps->gender);
}

int main()
{
	stu s = { "ÕÅÈı",40,"16680800809","ÄĞ" };
	//printf1(s);
    printf2(&s);
	return 0;
}