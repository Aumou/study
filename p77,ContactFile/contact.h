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

//通讯录类型
struct Contact
{
	struct PeoInfo* data;//存放信息
	int size;//记录当前存放信息的个数
	int capacity;
};

//声明函数
//初始化通讯录的函数
void InitContact(struct Contact* ps);

//添加一个信息到通讯录
void AddContact(struct Contact* ps);

//打印通讯录中的信息
void ShowContact(const struct Contact* ps);

//删除指定的联系人
void DelContact(struct Contact* ps);

//查询指定的联系人信息
void SearchContact(const struct Contact* ps);

//修改指定的联系人信息
void ModifyContact(struct Contact* ps);

//对已有的联系人信息进行排序
void SortContact(struct Contact* ps);

//销毁释放 临时创建的动态内存
void DestroyContact(struct Contact* ps);

//对输入信息进行保存
void SaveContact(struct Contact* ps);

//加载文件中的信息到通讯录
void LoadContact(struct Contact* ps);
