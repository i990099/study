#include<stdio.h>

struct S {


	char a[10];
};

void SearchSingleNum(int* arr,int sz) {





}

void  testpoint(int* p) {
	printf("%p\n", p);
	p++;
	printf("%p\n", p);

}


int main() {

	int a = 5;

	int* p = &a;

	//char* c = (char*)p;

	//int* d = (int*)0;

	//struct S* s = (struct S*)0;

	//printf("%p      %p   %p\n", p, c,d);

	//printf("%d   %c   %d\n", *p, *c,*d);
	printf("%p\n", p);
	printf("%d\n", *p);
	testpoint(p);
	printf("%p\n", p);
	printf("%d\n", *p);

	//int arr[5] = { 1,5 };
	//for (int i = 0;i<5;i++) {
	//	printf("%d\n", arr[i]);
	//}

	int cc[2][2] = { {1,2},{3,4} };

	int* p1 = &cc[0][0];

	int* p2 = cc[0];

	int (*ps)[2] = cc;

	printf("%p   %p  %p \n", p1, p2,ps);

	printf("%d   %d \n", p1[0], p2[0]);

	char* aa[] = { "work","at","alibaba" };

	printf("%p   %p   %c\n", aa, aa[0],*aa[0]);
	return 0;
}