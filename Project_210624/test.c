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
	//����ͨѶ¼
	struct Contact con;
	InitContact(&con);//��ʼ��ͨѶ¼
	do {
		menu();
		printf("��ѡ��-> ");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			//printf("�����ϵ��\n");
			AddContact(&con);
			break;
		case MODIFY:
			//printf("�޸���ϵ��\n");
			break;
		case SEARCH:
			//printf("������ϵ��\n");
			SearchContact(&con);
			break;
		case DEL:
			//printf("ɾ����ϵ��\n");
			DelContact(&con);
			break;
		case SHOW:
			//printf("��ʾ��ϵ��\n");
			ShowContact(&con);
			break;
		case SORT:
			//printf("����\n");
			break;
		case EXIT:
			printf("�˳�\n");
			break;
		default:
			printf("�������\n");
			break;
		}

	} while (input);


	return 0;
}
