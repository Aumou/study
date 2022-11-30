#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}

void AddContact(struct Contact* ps)
{
	if (ps->data == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &ps->data[ps->size].age);
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("���ӳɹ�\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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


static int FindByName(const struct Contact* ps, char name[])//staticֻ���ڱ��ļ��б����� ���ܱ������ļ�����
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
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if ( pos == ps->size)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;//��Ϊɾ��һ����Ϣ ����һ������ ����size�Ĵ�СҲӦ��1
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("����Ҫ���ҵ��˵�����:>");
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("��%s����Ϣ\n",name);
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸ĵ��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("�����ڴ��˵���Ϣ\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &ps->data[pos].age);
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}

void SortContact(struct Contact* ps)
{

}