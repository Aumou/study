#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"
#include <errno.h>

void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (NULL == ps->data)
	{
		return;
	}
	ps->capacity = DEFAULT_SZ;
	ps->size = 0;
	LoadContact(ps);
}

//��������
void CheckCapacity(struct Contact* ps);

void LoadContact(struct Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* PfRead = fopen("contact.dat", "rb");
	if (NULL == PfRead)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	while (fread(&tmp, sizeof(PeoInfo), 1, PfRead))//һ��һ����ȡ ����ȡ��֮��᷵��0 ��ʱѭ������
	{
		//fread�ķ���ֵΪ���һ�ζ�ȡ���ַ��� �����55�� ��һ�ζ�ȡ10�� ��ô��󷵻�ֵΪ5
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->capacity == ps->size)
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);
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
	printf("��ӳɹ�\n");
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
	if (pos == ps->size)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
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
		printf("��%s����Ϣ\n", name);
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

void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (NULL == pfWrite)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//дͨѶ¼�����ݵ��ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}