//#include<stdio.h>
//
//struct S1 {
//
//	char a;
//	char b;
//	 int   c;
//
//} ;
//
//struct S2 {
//
//	char a;
//	int   c;
//	char b;
//
//}  ;
//
//int main() {
//	int a = 2;
//
//	int* p = &a;
//	int* q = &a;
//
//	printf("p=%p    q=%p\n",p,q);
//
//	++(char*)p;
//
//	char* cq = (char*)q++;//一次自增一个int 也就是4个字节
//	//((char*)q)++;//一次自增一个char 也就是1个字节
//
//	printf("p=%p    q=%p   cq = %p\n",p,q,cq);
//
//	struct S1 s1 = {0};//内存对齐char  char  int 1+1+2+4  里面的2就是为了凑齐是下一个字节也就是int所占字节的倍数，
//	//总字节也要是这里面所占字节  最大的那个的倍数
//
//	struct S2 s2 = {0};//内存对齐char   int  char  1+3+4+1+3
//
//	printf("s1=%d    s2=%d\n",sizeof(s1),sizeof(s2));
//
//
//	return 0;
//}