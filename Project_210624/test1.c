//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
//
////int main() {
////
////
////	//int* p = (int*)malloc(5 * sizeof(int));
////
////	int* p = (int*)calloc(5, sizeof(int));
////
////	if (p != NULL) {
////		int* q = (int*)realloc(p, 5 * sizeof(int));
////		
////		if (q != NULL) {
////			p = q;
////		}
////
////	}
////
////	if (p != NULL) {
////		for (size_t i = 0; i < 10; i++)
////		{
////			*(p + i) = i;
////		}
////		for (size_t i = 0; i < 10; i++)
////		{
////			printf("%d  ", *(p + i));
////		}
////
////		printf("\n");
////	}
////	
////	free(p);
////	p = NULL;
////
////
////
////	return 0;
////}
//
//
//
//typedef struct Stu {
//
//	char name[10];
//
//	int age;
//
//}Stu;
//
////ð������
//void bubble(int arr[],int sz) {
//
//	for (int i = 0;i<sz-1;i++) {
//	
//		for (int j = 0;j<sz-i-1;j++) {
//
//			if (arr[j] > arr[j+1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//
//		}
//	
//	}
//}
//
////���ݽ���
////һ���ֽ�һ���ֽڵĽ���
//void swap(char*  buf1, char* buf2, int size) {
//
//	for (int i = 0; i < size;i++) {
//		char temp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = temp;
//		buf1++;
//		buf2++;
//	
//	}
//
//
//
//}
////�Լ�д�������㷨
////��һ��������Ҫ���������
////�ڶ�������������Ԫ�ظ���
////������������ÿ��Ԫ����ռ�ڴ��С����λ�ֽ�
////���ĸ������� ���о���ʵ�ֱȽϹ��ܵĺ�����ָ��
//void bubble_sort(void* base, size_t num, size_t size,int (*compar)(const void* e1, const void* e2)) {
//
//	for (size_t i = 0;i < num - 1;i++) {
//
//		for (size_t j = 0;j < num - i - 1;j++) {
//
//			char*  e1 = (char*)base+j* size;
//			char*  e2 = (char*)base + (j+1) * size;
//
//			if (compar(e1, e2) > 0) {
//				swap(e1, e2, size);
//			}
//
//		}
//
//	}
//	
//}
//
//
//
//int cmp_int(const void* e1, const void* e2) {
//
//	//�Ƚ��������ε�ֵ
//	//����0 ��ʾ e1 ����e2
//	//С��0 ��ʾ e1 С�� e2
//	//����0 ��ʾ e1 ���� e2
//
//	return (*(int*)e1 - *(int*)e2);
//
//
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2) {
//
//	//�Ƚ��������ε�ֵ
//	//����0 ��ʾ e1 ����e2
//	//С��0 ��ʾ e1 С�� e2
//	//����0 ��ʾ e1 ���� e2
//
//	//�ַ����Ƚ�Ҫ��strcmp
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2) {
//
//	//�Ƚ��������ε�ֵ
//	//����0 ��ʾ e1 ����e2
//	//С��0 ��ʾ e1 С�� e2
//	//����0 ��ʾ e1 ���� e2
//
//	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
//
//}
//
//int main() {
//	
//	//int arr[10] = { 9,7,8,5,4,6,2,3,1,0 };
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	////bubble(arr, sz); 
//
//	////quick sort ��������
//	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	////qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//for (int i = 0;i<10;i++) {
//	//	printf("%d ", arr[i]);
//	//}
//	//printf("\n");
//
//
//	Stu s[3] = { {"jsd",22}, {"dwa",12} , {"hfcf",33} };
//
//	int sz = sizeof(s) / sizeof(s[0]);
//	printf("����ǰ\n");
//	printf("%-10s\t%-4s\n", "����", "����");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%-10s\t%-4d\n",s[i].name,s[i].age);
//	}
//
//
//	//��һ������ �������������Ԫ�ص�ַ
//	//�ڶ������� ����ĸ���
//	//���������� ���鵥��Ԫ����ռ�ڴ��С ��λ�ֽ�
//	//���ĸ����� �Ǻ���ָ�� �Ƚ�����Ԫ�ص���ʹ�õĺ����ĵ�ַ- �ú�����Ҫ�Լ�ʵ��
//	//����ָ�����������  �Ǵ��Ƚϵ�����Ԫ�صĵ�ַ
//	//qsort(s,3,sizeof(s[0]), cmp_stu_by_name);
//	bubble_sort(s, 3, sizeof(s[0]), cmp_stu_by_name);//������
//	bubble_sort(s, 3, sizeof(s[0]), cmp_stu_by_age);//������
//
//	printf("�����\n");
//	printf("%-10s\t%-4s\n","����","����");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%-10s\t%-4d\n", s[i].name, s[i].age);
//	}
//
//
//
//	return 0;
//
//
//}
