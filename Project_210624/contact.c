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

		printf("请输入姓名->");
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
	void Menu() {

		printf("***********************************************\n");
		printf("***********************************************\n");
		printf("********   1. Name          2. Age     ********\n");
		printf("********   3. Sex           4. Tele    ********\n");
		printf("********   5. Addr          0. Finish   *******\n");
		printf("***********************************************\n");
		printf("***********************************************\n");
	
	}
	//修改联系人
	void ModifyContact(struct Contact* ps) {
		
		char name[MAX_NAME];
		printf("请输入修改人的名字\n");
		
		scanf("%s", name);

		int pos = FindByName(ps,name);

		if (pos == -1) {
			printf("没有找到要修改的人\n");
		}
		else {
			int input = 0;
			do {
				Menu();
				printf("请选择要修改的选项-> ");
				scanf("%d", &input);

				switch (input)
				{
				case NAME:
					printf("请输入要修改的姓名:> ");
					scanf("%s", ps->data[pos].name);
					break;
				case AGE:
					printf("请输入要修改的年龄:> ");
					scanf("%d", &(ps->data[pos].age));
					break;
				case SEX:
					printf("请输入要修改的性别:> ");
					scanf("%s", ps->data[pos].sex);
					break;
				case TELE:
					printf("请输入要修改的电话:> ");
					scanf("%s", ps->data[pos].tele);
					break;
				case ADDR:
					printf("请输入要修改的住址:> ");
					scanf("%s", ps->data[pos].addr);
					break;
				case FINISH:
					printf("退出\n");
					break;
				default:
					printf("输入错误\n");
					break;
				}

			} while (input);


			printf("修改成功\n");

		}
	
	}

	int cmp_peoInfo_by_name(const void* e1, const void* e2) {

		//比较两个整形的值
		//大于0 表示 e1 大于e2
		//小于0 表示 e1 小于 e2
		//等于0 表示 e1 等于 e2

		//字符串比较要用strcmp
		return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);

	}
	int cmp_peoInfo_by_age(const void* e1, const void* e2) {

		//比较两个整形的值
		//大于0 表示 e1 大于e2
		//小于0 表示 e1 小于 e2
		//等于0 表示 e1 等于 e2

		return (((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age);

	}

	int cmp_peoInfo_by_sex(const void* e1, const void* e2) {

		//比较两个整形的值
		//大于0 表示 e1 大于e2
		//小于0 表示 e1 小于 e2
		//等于0 表示 e1 等于 e2

		//字符串比较要用strcmp
		return strcmp(((struct PeoInfo*)e1)->sex, ((struct PeoInfo*)e2)->sex);

	}

	int cmp_peoInfo_by_tele(const void* e1, const void* e2) {

		//比较两个整形的值
		//大于0 表示 e1 大于e2
		//小于0 表示 e1 小于 e2
		//等于0 表示 e1 等于 e2

		//字符串比较要用strcmp
		return strcmp(((struct PeoInfo*)e1)->tele, ((struct PeoInfo*)e2)->tele);

	}

	int cmp_peoInfo_by_addr(const void* e1, const void* e2) {

		//比较两个整形的值
		//大于0 表示 e1 大于e2
		//小于0 表示 e1 小于 e2
		//等于0 表示 e1 等于 e2

		//字符串比较要用strcmp
		return strcmp(((struct PeoInfo*)e1)->addr, ((struct PeoInfo*)e2)->addr);

	}

	//联系人排序 指定类型排序
	void SortContact(struct Contact* ps) {

		if (!ps->size) {
			printf("通讯录为空 无法排序\n");
		}
		else {
			int input = 0;
			do {
				Menu();
				printf("请选择要排序的类型-> ");
				scanf("%d", &input);

				switch (input)
				{
				case NAME:
					qsort(ps->data,ps->size,sizeof(ps->data[0]),cmp_peoInfo_by_name);
					ShowContact(ps);
					break;
				case AGE:
					qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp_peoInfo_by_age);
					ShowContact(ps);
					break;
				case SEX:
					qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp_peoInfo_by_sex);
					ShowContact(ps);
					break;
				case TELE:
					qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp_peoInfo_by_tele);
					ShowContact(ps);
					break;
				case ADDR:
					qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp_peoInfo_by_addr);
					ShowContact(ps);
					break;
				case FINISH:
					printf("退出\n");
					break;
				default:
					printf("输入错误\n");
					break;
				}

			} while (input);

		}
	
	
	}



