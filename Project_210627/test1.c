//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<errno.h>
//
//
////int main() {
////
////	int a = 2;
////	int b = 3;
////	printf("%d %d\n", a, b);
////	a = a ^ b;
////	b = a ^ b;
////	a = a ^ b;
////	printf("%d %d\n",a,b);
////	
////	
////		//int* p = (int*)malloc(5 * sizeof(int));
////
////	int* p = (int*)calloc(5, sizeof(int));
////
////	if (p != NULL) {
////		int* q = (int*)realloc(p, 10 * sizeof(int));
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
////	return 0;
////}
//
//
////int main() {
////	int a = 10000;
////	char b = 'A';
////	FILE* pf = fopen("test.txt","wb");
////
////	if (pf == NULL) {
////		printf("%s\n", strerror(errno));
////
////		return;
////	}
////
////	//дһ���ĸ��ֽڵ����ݵ�pf����ȥ
////	//fwrite(&a,4,1,pf);//�����Ƶ���ʽд���ļ���
////	//fwrite(&b, 1, 1, pf);//�����Ƶ���ʽд���ļ���
//////д�ļ�
////	//fputc('h', pf);
////	//fputc('e', pf);
////	//fputc('l', pf);
////	//fputc('l', pf);
////	//fputc('o', pf);
////	fputs("hello\n", pf);
////	fputs("world\n", pf);
////
////	fclose(pf);
////	pf = NULL;
////
////	return 0;
////}
//
////int main() {
////
////	FILE* pr = fopen("test.txt", "r");
////
////	//���ļ�
////	//printf("%c", fgetc(pr));
////	//printf("%c", fgetc(pr));
////	//printf("%c", fgetc(pr));
////	//printf("%c", fgetc(pr));
////	//printf("%c", fgetc(pr));
////
////	char arr[6];
////	printf("%s", fgets(arr,6,pr));
////
////
////	fclose(pr);
////	pr = NULL;
////
////	return 0;
////}
//
//
////int main() {
////
////	char buf[1024] = { 0 };
////	 fgets(buf,1024,stdin);
////	fputs(buf,stdout);
////	
////
////	return 0;
////}
//
//struct S {
//
//	char name[20];
//	int age;
//	double score;
//
//};
//
////int main() {
////
////	struct S s = {"����",11,55.5};
////
////	FILE* pf = fopen("test.txt","wb");
////
////	if (pf == NULL) {
////
////		return;
////	}
////	//�����Ƶ���ʽд�ļ�
////	fwrite(&s,sizeof(struct S),1,pf);
////
////	fclose(pf);
////	pf = NULL;
////
////	return 0;
////}
//
//
//int main() {
//
//	struct S s = { 0 };
//
//	FILE* pf = fopen("test.txt", "rb");
//
//	if (pf == NULL) {
//
//		return;
//	}
//	//�����Ƶ���ʽ���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//
//	printf("%s  %d  %lf\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}