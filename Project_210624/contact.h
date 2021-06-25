
#define MAX 15
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#pragma once
#include<stdio.h>
#include<string.h>

/*��������*/

enum Option {
	EXIT,           //0
	ADD,          //1
	MODIFY,    //2
	SEARCH,    //3
	DEL,           //4
	SHOW,       //5
	SORT          //6
};

//������Ϣ
struct PeoInfo {
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//ͨѶ������
struct Contact {
	struct PeoInfo data[MAX];//��Ÿ�����Ϣ������
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���

};

//��������

void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(struct Contact* ps);
