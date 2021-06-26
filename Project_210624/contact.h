#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 5
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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

enum Info {
	FINISH,           //0
	NAME,          //1
	AGE,    //2
	SEX,    //3
	TELE,           //4
	ADDR,       //5
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
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);
