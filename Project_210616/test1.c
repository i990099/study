#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main() {
//
//	int arr[3] = {1,2,3};
//	//  arr[2] �൱��  *(arr+(2)) == *(arr+2)
//	//  2[arr] �൱��  *(2+(arr)) == *(2+arr) == *(arr+2)
//	printf("arr[2] = %d\n2[arr] = %d \n*(arr+2) = %d\n",arr[2],2[arr], *(arr + 2));
//	printf("----------------�ָ���--------------------\n");
//	// arr ���Խ��мӼ������㣬���ǲ��ܽ������������Լ�����  ��Ϊ��������ʾ���ǵ�ַ����
//	// p  ���Խ��мӼ������㣬Ҳ�������������Լ�����  ��Ϊp��ָ�����
//	int* p = arr;
//	printf("p[2] = %d\n2[p] = %d \n*(p+2) = %d\n", p[2], 2[p], *(p + 2));
//	return 0;
//}

/*
* ��ȡ�ַ�������
*/
//size_t my_strlen(const char*  str) {
//	assert(str != NULL);//���� ���Ϊ�� ��ӡ������־����ֹ����
//	
//	//��һ�ַ�ʽ ����
//	// size_t count = 0;
//	//while (*str++)
//	//	count++;
//	//return count;
//
//	//�ڶ��ַ�ʽ ��ַ����
//	//if (*str == '\0') {
//	//	return 0;
//	//}
//	//size_t len = 0;
//	//char* c_str = str;
//	//while (*++str);
//	//return (size_t)(str - c_str);
//	
//	//�����ַ�ʽ �ݹ�
//	//if(*str == '\0') {
//	//	return 0;
//	//}
//	//else {
//	//	return 1 + my_strlen(str + 1);
//	//}
//
//}

/*
* ��Դ�ַ������Ƶ�Ŀ���ַ����п��ַ���Ҳ�ᱻ���ƹ�ȥ ������'\0'����
*/
//char* my_strcpy(char* dest, const char* src){
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	char* str = dest;
//	while(*str++ = *src++);
//
//	return dest;
//}


/*
* ���ֵ�˳��Ա���ߺ��ұ��ַ���С
*/
//int my_strcmp(const char* lhs, const char* rhs){
//
//	assert(lhs != NULL);
//	assert(rhs != NULL);
//
//	while (*lhs == *rhs) {
//		if (*lhs == '\0' ) {//��ʾ�����ڶ���'\0'��β��ʱ��һֱ�����
//			return 0;
//		}
//		lhs++;
//		rhs++;
//	}
//	return (*lhs - *rhs);
//}

/*
* ���ҵ�dest�Ľ�����'\0'Ȼ��ʼ׷�Ӳ���'\0'�滻��src�ĵ�һ���ַ� ���Ҳ��src��'\0'׷�ӹ���
*/
char* my_strcat(char* dest, const char* src) {
	assert(dest != NULL);
	assert(src != NULL);
	char* strcat = dest;

	while (*strcat) {
		strcat++;
	}

	while (*strcat++ = *src++);

	return dest;
}

int main() {

	//char arr[] = "abcdefgh";
	//int ret = strlen(arr);
	//printf("len = %d\nmy_len = %d\n",strlen(arr),my_strlen(arr));
	//int len = my_strlen(arr);
	//printf("len = %d\n",  my_strlen(arr));

	//char a[] = "helloxxxxxxxxx";
	//char b[] = "world";
	////char* ret = strcpy(a, b);
	//char* ret = my_strcpy(a, b);
	//printf("%s\n",ret);

	//char a[] = "abcdef";
	//char b[] = "ascdefgh";
	//int ret = strcmp(a, b);
	//printf("%d\n",ret);

	char a[20] = "hello \0xxxxx";// Ҫ���㹻�ռ� ��Ϊ���鲻���Զ���󳤶�
	char b[] = "world";

	char* ret = my_strcat(a,b);
	printf("%s\n",ret);

	return 0;
}