

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
			ModifyContact(&con);
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
			SortContact(&con);
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


////typedef struct Stu {
////
////	char name[10];
////
////	int age;
////
////}Stu;
////
////int main() {
////
////
////	char* a = "abdadj;iaso";
////
////	char* b = "abffff";
////
////	char c[] = "abffff";
////
////	printf("%d\n",strlen(b));
////	printf("%d\n", strlen(c));
////	printf("%d\n", sizeof(c));
////
////	//int ret = memcmp(b,c, strlen(b));
////
////	Stu stu1 = { "cd",12 };
////
////	Stu stu2 = { "cd",12 };
////
////	int ret = memcmp(&stu1, &stu2, sizeof(Stu));
////
////	printf("%d\n", ret);
////
////
////	return 0;
////
////}
//
//
//
