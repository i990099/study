#define _CRT_SECURE_NO_WARNINGS 0
#include "contact.h"

/*实现函数功能*/


//初始化通讯录
void InitContact(struct Contact* ps){
	//printf("%d\n", sizeof(ps->data));
	memset(ps->data , 0 ,  sizeof(ps->data) );
	ps->size = 0;
}

//添加联系人
void AddContact(struct Contact* ps) {

	if (ps->size == MAX) {
		printf("通讯录已满，不能添加\n");
	}
	else {
		printf("请输入姓名:> ");
		scanf("%s",  ps->data[ps->size].name);
		printf("请输入年龄:> ");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:> ");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:> ");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入住址:> ");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
	}
}
	
	//显示添加的联系人
	void ShowContact(const struct Contact* ps) {
	
		if (!ps->size) {
			printf("通讯录为空\n");
		}
		else {
			//标题
			printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","姓名", "年龄", "性别", "电话", "住址");
			
			//数据
			for (int i = 0; i < ps->size; i++)
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

	int FindByName(struct Contact* ps, char name[MAX_NAME]) {
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			if (!strcmp(name, ps->data[i].name)) {//找到匹配的联系人 相等返回值为0假  !0为真

				return i;
			}
		}

		return -1;//没找到
	}


	//删除联系人
	void DelContact(struct Contact* ps) {
		
		char name[MAX_NAME];

		printf("请输入姓名\n");
		scanf("%s", name);

		//查找被删除人的位置

		int pos = FindByName(ps,name);

		if (pos == -1) {
			printf("没有找到该联系人\n");
		}
		else {
			//删除数据
			int j = 0;
			for (j = pos; j < ps->size - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			//memset(&(ps->data[ps->size - 1]), 0, sizeof(struct PeoInfo));
			ps->size--;
			printf("删除成功\n");
		
		}

	}


	//查找联系人并显示
	void SearchContact(struct Contact* ps) {
		char name[MAX_NAME];
		printf("请输入要查找联系人的名字\n");
		scanf("%s", name);

		int pos = FindByName(ps, name);

		if (pos == -1) {
			printf("没找到要查找的联系人\n");
		}
		else {
			//标题
			printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");

			//数据
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);

		}
	
	}


