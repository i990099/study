
#define MAX 15
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#pragma once
#include<stdio.h>
#include<string.h>

/*函数声明*/

enum Option {
	EXIT,           //0
	ADD,          //1
	MODIFY,    //2
	SEARCH,    //3
	DEL,           //4
	SHOW,       //5
	SORT          //6
};

//个人信息
struct PeoInfo {
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯了类型
struct Contact {
	struct PeoInfo data[MAX];//存放个人信息的数组
	int size;//记录当前已经有的元素个数

};

//函数声明

void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(struct Contact* ps);
