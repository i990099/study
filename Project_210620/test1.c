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
//	char* cq = (char*)q++;//һ������һ��int Ҳ����4���ֽ�
//	//((char*)q)++;//һ������һ��char Ҳ����1���ֽ�
//
//	printf("p=%p    q=%p   cq = %p\n",p,q,cq);
//
//	struct S1 s1 = {0};//�ڴ����char  char  int 1+1+2+4  �����2����Ϊ�˴�������һ���ֽ�Ҳ����int��ռ�ֽڵı�����
//	//���ֽ�ҲҪ����������ռ�ֽ�  �����Ǹ��ı���
//
//	struct S2 s2 = {0};//�ڴ����char   int  char  1+3+4+1+3
//
//	printf("s1=%d    s2=%d\n",sizeof(s1),sizeof(s2));
//
//
//	return 0;
//}