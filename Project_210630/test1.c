#include <stdio.h>
#include <stdlib.h>



//int main() {

	//int a = 5;

	//int* p = &a;

	//int** q = &p;

	//printf("p = %p  q = %p *q = %p\n", p, q, *q);
	//printf("a = %d   *p = %d  **q= %d\n", a, *p, **q);

//	return 0;
//}



//int main() {
//
//	int arr[5] = { 1,2,3,4,5 };
//
//	int* p = arr;
//	for (int i = 0;i < 5;i++) {
//		printf("p=%p  &p=%p\n", p, &p);
//		printf("%d  \n", *p++);
//
//	}
//	p = NULL;
//
//	printf("%d\n", p);
//
//
//	return 0;
//}


struct S {

	char c1;
	int a;
	char c2;

};

//��0��ַǿת�ɽṹ��ָ��ʹ��ָ��ṹ����Ԫ�ص�ַ  ȡ�ṹ���Ա��ַ&��ǿת��int����
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)


//int main() {
//
//	int arr[3] = { 1,2,3 };
//	int a = 4;
//	int* p = &a;
//	int* q1 = ((int*)0);//��ַ0ǿתintָ��
//	int* q2 = ((int*)4);//��ַ4ǿתintָ��
//	printf("q1=%p   &q1=%p  q2=%p    &q2=%p\n", q1,&q1, q2, &q2);
//	printf("(int)q1=%d   (int)q2=%d\n", (int)q1, (int)q2);
//	printf("-----------------------------------------------\n");
//
//	//ͨ��������ʽʵ��ƫ���� ��0��ַָ��ָ�������ַ
//	int parr1 = (int)&(((int*)0)[0]);
//	int parr2 = (int)&(((int*)0)[1]);
//	int parr3 = (int)&(((int*)0)[2]);
//	printf("parr1 = %d  parr2 = %d  parr3 = %d\n", parr1, parr2, parr3);
//
//	//(*(void(*)())0)();
//
//
//	//char* q1 =&(((struct S*)0)->c1);
//	//int* q2 = &(((struct S*)0)->a);
//	//char* q3 = &(((struct S*)0)->c2);
//
//	//printf("%p   %p    %p\n", q1,q2,q3);
//
//	return 0;
//}

//int main() {
//
//	struct S s;
//
//	printf("%d  %d   %d\n", sizeof(s.c1), sizeof(s.a), sizeof(s.c2));
//
//	printf("%p  %p  %p   %p\n",&s, &s.c1, &s.a,&s.c2);
//
//
//	int a = &s;
//	int b = &s.c1;
//	int c = &s.a;
//	int d = &s.c2;
//	printf("%d  %d   %d\n", b-a,c-a, d-a);
//
//	offsetof(struct S,a);
//	printf("%d  %d   %d\n", offsetof(struct S, c1), offsetof(struct S, a), offsetof(struct S, c2));
//	printf("%d  %d   %d\n", OFFSETOF(struct S, c1), OFFSETOF(struct S, a), OFFSETOF(struct S, c2));
//
//	return 0;
//}



//���ҳ�ֻ����һ�ε�����
void searchSingleNum(int arr[],int sz) {
	int count = 0;
	for (int i = 0;i<sz;i++) {
		if (arr[i] & 2) {
			count++;
			printf("%d\n", arr[i]);
		}
	}
	printf("%d\n", count);
	//int* p = malloc()


}




//int main() {
//
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//int a = 0;
//	//for (int i = 0;i<len;i++) {
//
//	//	a^= arr[i];
//	//}
//	//printf("%d\n", a);
//
//	searchSingleNum(arr, len);
//
//	return 0;
//}


int main() {

	//int a[3] = { 1,2,3 };

	//int* p = &a;//��int *���롰int (*)[3]���ļ�Ӽ���ͬ
	//int* p = a;

	//for (int i = 0;i<3;i++) {
	//	printf("%d ", *(p + i));
	//}

	int a[3] = { 1,2,3 };
	int b[3] = { 4,5,6 };
	int c[2][3] = { { 1,2,3 }, { 4,5,6 } };
	int c1[2][3] = {a,b};//����ʼ����:��int���롰int *���ļ�Ӽ���ͬ ��ά��������
	//��Ϊ��ά��������������ֵ����Ԫ�ص�ַ��ͬ
	//��ά�����д�ŵĶ������ε�ַ�����������ַ
	int* d[2] = { a,b };

	int(*e)[3] = c;//��ά����������Ԫ�ص�ַ����Ԫ�����������飬Ҳ������������ĵ�ַ
	int(*f)[3] = &a;//��������������͵�ַ��ָ��  ��������ָ��
	printf("%d\n", **e);
	printf("%d\n", **(e + 1));
	printf("%d\n", *f);

	printf("%d\n", **f);

	printf("%p    %p     \n", c, *c);

	printf("%p    %p     \n", e, *e);

	printf("%p    %p     \n", f, *f);

	//int (*e)[3] = &c[0];// 

	//int f[2][3] = { { 1,2,3 }, { 4,5,6 } };


	char* ch[] = { "ENTER","NEW","POINT","FIRST"};
	char* a1 = "ENTER";
	char* a2= "NEW";
	char* ch1[] = { a1,a2};


	return 0;
}