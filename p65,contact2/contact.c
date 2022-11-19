#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置通讯录最初只有0个元素
}

void AddContact(struct Contact* ps)
{
	if (ps->data == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &ps->data[ps->size].age);
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}


static int FindByName(const struct Contact* ps, char name[])//static只能在本文件中被调用 不能被其他文件调用
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == (strcmp(ps->data[i].name, name)))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除的人的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if ( pos == ps->size)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;//因为删除一个信息 会少一个数据 所以size的大小也应减1
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("输入要查找的人的名字:>");
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("无%s的信息\n",name);
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改的人的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("不存在此人的信息\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &ps->data[pos].age);
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}

void SortContact(struct Contact* ps)
{

}