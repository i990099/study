#include<stdio.h>
#include<string.h>

//�����ַ����������
void reverse(char* str) {
	int len = strlen(str);
	char* left = str;//��Ԫ�ص�ַ
	char* right = str+len - 1;//���һ��Ԫ�ص�ַ

	printf("len=%d %c  %c\n ",len,*left,*right);
	do {
		//printf("-left=%p right=%p %c  %c\n ", left, right, *left, *right);
		char p = *right;
		*right = *left;
		*left = p;
		printf("left=%p right=%p %c  %c\n ", left, right, *left, *right);
	} while (++left < --right);




}
int main() {

	char str[] = "abcdef";
	printf("str=%s\n",str);
	reverse(str);
	printf("str=%s\n", str);

	return 0;
}