#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼����
struct Contact
{
	struct PeoInfo* data;//�����Ϣ
	int size;//��¼��ǰ�����Ϣ�ĸ���
	int capacity;
};

//��������
//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* ps);

//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);

//��ӡͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* ps);

//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);

//��ѯָ������ϵ����Ϣ
void SearchContact(const struct Contact* ps);

//�޸�ָ������ϵ����Ϣ
void ModifyContact(struct Contact* ps);

//�����е���ϵ����Ϣ��������
void SortContact(struct Contact* ps);

//�����ͷ� ��ʱ�����Ķ�̬�ڴ�
void DestroyContact(struct Contact* ps);

//��������Ϣ���б���
void SaveContact(struct Contact* ps);

//�����ļ��е���Ϣ��ͨѶ¼
void LoadContact(struct Contact* ps);