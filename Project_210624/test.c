#define _CRT_SECURE_NO_WARNINGS 0

#include "contact.h"




void menu() {
	printf("***********************************************\n");
	printf("***********************************************\n");
	printf("********   1. Add          2. Modify   ********\n");
	printf("********   3. Search       4. Del      ********\n");
	printf("********   5. Show         6. Sort     ********\n");
	printf("********   0. Exit                     ********\n");
	printf("***********************************************\n");
	printf("***********************************************\n");

}


int main() {

	int input = 0;
	//创建通讯录
	struct Contact con;
	InitContact(&con);//初始化通讯录
	do {
		menu();
		printf("请选择-> ");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			//printf("添加联系人\n");
			AddContact(&con);
			break;
		case MODIFY:
			//printf("修改联系人\n");
			break;
		case SEARCH:
			//printf("查找联系人\n");
			SearchContact(&con);
			break;
		case DEL:
			//printf("删除联系人\n");
			DelContact(&con);
			break;
		case SHOW:
			//printf("显示联系人\n");
			ShowContact(&con);
			break;
		case SORT:
			//printf("排序\n");
			break;
		case EXIT:
			printf("退出\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}

	} while (input);


	return 0;
}
