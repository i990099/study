#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//�ص�����������


//ð������
void bubbleSort(int arr[], int sz) {
	for (int i = 0;i < sz-1;i++) {
		for (int j = 0;j<sz-i-1;j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	
	}
}; 
//�������� һ���ֽ�һ���ֽڵĽ���
void swap(char* e1, char* e2, size_t width) {

	for (size_t i = 0; i < width; i++) {
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}

}

//void qsort(void *base,//Ŀ���������ʼλ�� ��Ԫ�ص�ַ
//	size_t num,//����Ԫ��
//	size_t width,//ÿ��Ԫ����ռ�ֽ�
//	int (*compare)(const void* elem1, const void* elem2)//�ȽϺ���
//);
void my_qsort(void* base, size_t num, size_t width, int (*compare)(const void* elem1, const void* elem2)) {
	
	//�Ƚϵ�����
	for (size_t i = 0; i < num - 1; i++) {
		//ÿ�˱ȽϵĴ���
		for (size_t j = 0; j< num- i - 1; j++) {

			//ǿ��ת���ɵ��ֽ�ָ�룬����Ԫ��֮��Ĳ������һ��width
			//�˴��õ��� �����ص�
			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {//����Ԫ�ؽ��бȽ�

				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//��������
			}

		}

	}

}



//int ��������
// void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
// void* ���͵�ָ�� ���ܽ��н����ò���
// void* ���͵�ָ�� ���ܽ��мӼ�����
//�� void*ǿ������ת����int*
int compare_int(const void* e1,const void* e2) {

	return *(int*)e1 - *(int*)e2;

}
//float��������
int compare_float(const void* e1, const void* e2) {

	return (int)(*(float*)e1 - *(float*)e2);

}


struct stu {
	char name[20];
	int age;

};


void test1() {
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), compare_int);
	my_qsort(arr, sz, sizeof(arr[0]), compare_int);
	for (int i = 0; i < sz; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void test2() {
	float f[] = { 8.0,9.0,3.0,5.0,2.0,7.0,1.0,4.0,10.0,6.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	//qsort(f, sz, sizeof(f[0]), compare_float);
	my_qsort(f, sz, sizeof(f[0]), compare_float);
	for (int i = 0; i < sz; i++) {
		printf("%f\t", f[i]);
	}
	printf("\n");
}

int cmp_stu_by_age(const void* e1, const void* e2) {

	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;

}

int cmp_stu_by_name(const void* e1, const void* e2) {

	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);

}

void test3() {
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	my_qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	//my_qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	for (int i = 0; i < sz; i++) {
		printf("%s   %d\n", s[i].name,s[i].age);
	}
	
}


int main() {

	//ð��������
	//ð��������ֻ��������������

	//int arr[] = {1,3,5,7,9,2,4,6,8,10};
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//bubbleSort(arr,sz);
	

	//test1();
	//test2();
	test3();

	//int a = 2;
	//int b = 3;

	//char* e1 = (char*)(&a);
	//char* e2 = (char*)(&b);
	//
	//for (size_t i = 0; i < 4; i++) {
	//	char tmp = *e1;
	//	*e1 = *e2;
	//	*e2 = tmp;
	//	e1++;
	//	e2++;
	//}
	//printf("%d  %d\n", a, b);

	return 0;

}