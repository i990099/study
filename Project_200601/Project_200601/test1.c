//
//#include<stdio.h>
//#include <stdlib.h>
//
//
//int my_strlen(char* str) {
//
//	//assert(str != NULL);//���������к�����ʽ�ĺ�Ĳ������ʽ�Ƚϵ����㣨�����ʽΪfalse������һ����Ϣд���׼�����豸����ֹ�����ã���ֹ����ִ�С�
//
//	if (*str == 0) {
//		return 0;
//	}else{
//		return 1 + my_strlen(str + 1);
//	}
//
//	
//	//return count;
//}
//int my_strlen2(char* str) {
//
//	int count = 0;
//	while (*str++) {
//		printf("%c\n", *str);
//		count++;
//	}
//
//	return count;
//}
//int my_strlen3(char* str) {
//
//	//printf("%c\n", *str);
//	char* p = str;
//	while (*++str) {
//		printf("%c\n", *str);
//		;
//	}
//	printf("%d\n",(str-p));
//
//	return str - p;
//	
//}
//
//int my_strlen(char*);//�ݹ鷽ʽ����
//int my_strlen2(char* );//�����ķ�ʽ����
//int my_strlen3(char*);//��ַ����ķ�ʽ����
//
//
//int main() {
//
//	/*int a = 0;
//	int* p = &a;
//	*p = 2;
//	printf("%d \n",a);*/
//
//	char arr[] = {"hello world"};
//	int sz = sizeof(arr)-1;
//	int len = my_strlen2(arr);
//	printf("%d\n",len);
//
//	//char buffer[8] = {0,0,0,0,0,0,0,0};
//	//int input = 0;
//	//scanf("%d",&input);
//	//itoa(input,buffer,2);//��ָ������ת���ɶ������ַ��� ��һ������������ �ڶ����������ַ����� ������������ ������
//
//	//printf("%s \n", buffer);
//
//	return 0;
//}