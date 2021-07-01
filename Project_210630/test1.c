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

//将0地址强转成结构体指针使其指向结构体首元素地址  取结构体成员地址&并强转成int类型
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)


//int main() {
//
//	int arr[3] = { 1,2,3 };
//	int a = 4;
//	int* p = &a;
//	int* q1 = ((int*)0);//地址0强转int指针
//	int* q2 = ((int*)4);//地址4强转int指针
//	printf("q1=%p   &q1=%p  q2=%p    &q2=%p\n", q1,&q1, q2, &q2);
//	printf("(int)q1=%d   (int)q2=%d\n", (int)q1, (int)q2);
//	printf("-----------------------------------------------\n");
//
//	//通过数组形式实现偏移量 用0地址指针指向数组地址
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



//查找出只出现一次的数字
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

	//int* p = &a;//“int *”与“int (*)[3]”的间接级别不同
	//int* p = a;

	//for (int i = 0;i<3;i++) {
	//	printf("%d ", *(p + i));
	//}

	int a[3] = { 1,2,3 };
	int b[3] = { 4,5,6 };
	int c[2][3] = { { 1,2,3 }, { 4,5,6 } };
	int c1[2][3] = {a,b};//“初始化”:“int”与“int *”的间接级别不同 二维整形数组
	//因为二维数组中数组名的值和首元素地址相同
	//二维数组中存放的都是整形地址而不是数组地址
	int* d[2] = { a,b };

	int(*e)[3] = c;//二维数组名是首元素地址，首元素是整形数组，也就是整形数组的地址
	int(*f)[3] = &a;//存放整形数组类型地址的指针  整形数组指针
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