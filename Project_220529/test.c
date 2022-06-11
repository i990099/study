//#include<stdio.h>
//#include<string.h>
//
//#define P(v,format) printf("v=%format",v)
//#define S(x) 3.5f*x*x
//
//int gcd(int a ,int b) {
//	printf("a=%d  b=%d\n",a,b);
//	if (b != 0) return gcd(b,a%b);
//	return a;
//}
//
//void swap(int* p1, int* p2) {
//	int t = *p1;
//	*p1 = *p2;
//	*p2 = t;
//}
//void swap1(int* p1, int* p2) {
//	printf("*p1=%d  *p2=%d\n", *p1, *p2);
//	int *t = p1;
//	p1 = p2;
//	p2 = t;
//	printf("*p1=%d  *p2=%d\n", *p1, *p2);
//}
//int main() {
//
//	int result = gcd(7,5);
//
//	printf("gcd=%d\n", result);
//
//	int a[] = { 1,2,3 };
//
//	char b[] = {'a',' ','b','\0'};
//
//	char str[] = "i am a boy";
//	char* pstr = str;
//
//	printf("%s\n", str);
//	puts(str);//会自动换行
//	char c[] = "\t\r\\\0will\n";
//	printf("%d\n",strlen(c));
//
//	int a1 = 1;
//	int b1 = 2;
//	float s1 = S(a1 + b1);
//	P(s1,f);
//	printf("\n");
//	int aa = 3;
//	int bb = 5;
//	int* paa = &aa;
//	int* pbb = &bb;
//	printf("aa=%d  bb=%d  *paa=%d  *pbb=%d\n",aa,bb,*paa,*pbb);
//	swap1(paa, pbb);
//	printf("aa=%d  bb=%d  *paa=%d  *pbb=%d\n", aa, bb, *paa, *pbb);
//
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	printf("%p   %p   %p\n",arr,arr+0,*(arr+0));
//	printf("%p   %p   %p\n", arr[0], &arr[0], &arr[0][0]);
//	printf("%d   %d    %d \n",*(*arr+2), **arr, *arr[0]);
//	char *name[] = {"zhangsan","lisi"};
//	char **pname[] = {name};
//	printf("%c   %c \n",**name,***pname);
//
//
//
//
//
//	return 0;
//}