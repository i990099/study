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

		printf("����������->");
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
	void Menu() {

		printf("***********************************************\n");
		printf("***********************************************\n");
		printf("********   1. Name          2. Age     ********\n");
		printf("********   3. Sex           4. Tele    ********\n");
		printf("********   5. Addr          0. Finish   *******\n");
		printf("***********************************************\n");
		printf("***********************************************\n");
	
	}
	//�޸���ϵ��
	void ModifyContact(struct Contact* ps) {
		
		char name[MAX_NAME];
		printf("�������޸��˵�����\n");
		
		scanf("%s", name);

		int pos = FindByName(ps,name);

		if (pos == -1) {
			printf("û���ҵ�Ҫ�޸ĵ���\n");
		}
		else {
			int input = 0;
			do {
				Menu();
				printf("��ѡ��Ҫ�޸ĵ�ѡ��-> ");
				scanf("%d", &input);

				switch (input)
				{
				case NAME:
					printf("������Ҫ�޸ĵ�����:> ");
					scanf("%s", ps->data[pos].name);
					break;
				case AGE:
					printf("������Ҫ�޸ĵ�����:> ");
					scanf("%d", &(ps->data[pos].age));
					break;
				case SEX:
					printf("������Ҫ�޸ĵ��Ա�:> ");
					scanf("%s", ps->data[pos].sex);
					break;
				case TELE:
					printf("������Ҫ�޸ĵĵ绰:> ");
					scanf("%s", ps->data[pos].tele);
					break;
				case ADDR:
					printf("������Ҫ�޸ĵ�סַ:> ");
					scanf("%s", ps->data[pos].addr);
					break;
				case FINISH:
					printf("�˳�\n");
					break;
				default:
					printf("�������\n");
					break;
				}

			} while (input);


			printf("�޸ĳɹ�\n");

		}
	
	}

	int cmp_peoInfo_by_name(const void* e1, const void* e2) {

		//�Ƚ��������ε�ֵ
		//����0 ��ʾ e1 ����e2
		//С��0 ��ʾ e1 С�� e2
		//����0 ��ʾ e1 ���� e2

		//�ַ����Ƚ�Ҫ��strcmp
		return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);

	}
	int cmp_peoInfo_by_age(const void* e1, const void* e2) {

		//�Ƚ��������ε�ֵ
		//����0 ��ʾ e1 ����e2
		//С��0 ��ʾ e1 С�� e2
		//����0 ��ʾ e1 ���� e2

		return (((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age);

	}

	int cmp_peoInfo_by_sex(const void* e1, const void* e2) {

		//�Ƚ��������ε�ֵ
		//����0 ��ʾ e1 ����e2
		//С��0 ��ʾ e1 С�� e2
		//����0 ��ʾ e1 ���� e2

		//�ַ����Ƚ�Ҫ��strcmp
		return strcmp(((struct PeoInfo*)e1)->sex, ((struct PeoInfo*)e2)->sex);

	}

	int cmp_peoInfo_by_tele(const void* e1, const void* e2) {

		//�Ƚ��������ε�ֵ
		//����0 ��ʾ e1 ����e2
		//С��0 ��ʾ e1 С�� e2
		//����0 ��ʾ e1 ���� e2

		//�ַ����Ƚ�Ҫ��strcmp
		return strcmp(((struct PeoInfo*)e1)->tele, ((struct PeoInfo*)e2)->tele);

	}

	int cmp_peoInfo_by_addr(const void* e1, const void* e2) {

		//�Ƚ��������ε�ֵ
		//����0 ��ʾ e1 ����e2
		//С��0 ��ʾ e1 С�� e2
		//����0 ��ʾ e1 ���� e2

		//�ַ����Ƚ�Ҫ��strcmp
		return strcmp(((struct PeoInfo*)e1)->addr, ((struct PeoInfo*)e2)->addr);

	}

	//��ϵ������ ָ����������
	void SortContact(struct Contact* ps) {

		if (!ps->size) {
			printf("ͨѶ¼Ϊ�� �޷�����\n");
		}
		else {
			int input = 0;
			do {
				Menu();
				printf("��ѡ��Ҫ���������-> ");
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
					printf("�˳�\n");
					break;
				default:
					printf("�������\n");
					break;
				}

			} while (input);

		}
	
	
	}



