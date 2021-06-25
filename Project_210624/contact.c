#define _CRT_SECURE_NO_WARNINGS 0
#include "contact.h"

/*ʵ�ֺ�������*/


//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps){
	//printf("%d\n", sizeof(ps->data));
	memset(ps->data , 0 ,  sizeof(ps->data) );
	ps->size = 0;
}

//�����ϵ��
void AddContact(struct Contact* ps) {

	if (ps->size == MAX) {
		printf("ͨѶ¼�������������\n");
	}
	else {
		printf("����������:> ");
		scanf("%s",  ps->data[ps->size].name);
		printf("����������:> ");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:> ");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:> ");
		scanf("%s", ps->data[ps->size].tele);
		printf("������סַ:> ");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
	}
}
	
	//��ʾ��ӵ���ϵ��
	void ShowContact(const struct Contact* ps) {
	
		if (!ps->size) {
			printf("ͨѶ¼Ϊ��\n");
		}
		else {
			//����
			printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","����", "����", "�Ա�", "�绰", "סַ");
			
			//����
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
			if (!strcmp(name, ps->data[i].name)) {//�ҵ�ƥ�����ϵ�� ��ȷ���ֵΪ0��  !0Ϊ��

				return i;
			}
		}

		return -1;//û�ҵ�
	}


	//ɾ����ϵ��
	void DelContact(struct Contact* ps) {
		
		char name[MAX_NAME];

		printf("����������\n");
		scanf("%s", name);

		//���ұ�ɾ���˵�λ��

		int pos = FindByName(ps,name);

		if (pos == -1) {
			printf("û���ҵ�����ϵ��\n");
		}
		else {
			//ɾ������
			int j = 0;
			for (j = pos; j < ps->size - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			//memset(&(ps->data[ps->size - 1]), 0, sizeof(struct PeoInfo));
			ps->size--;
			printf("ɾ���ɹ�\n");
		
		}

	}


	//������ϵ�˲���ʾ
	void SearchContact(struct Contact* ps) {
		char name[MAX_NAME];
		printf("������Ҫ������ϵ�˵�����\n");
		scanf("%s", name);

		int pos = FindByName(ps, name);

		if (pos == -1) {
			printf("û�ҵ�Ҫ���ҵ���ϵ��\n");
		}
		else {
			//����
			printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");

			//����
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);

		}
	
	}


