#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<assert.h>



/*
* ��Դ�ַ������Ƶ�Ŀ���ַ����а�ָ�������������src�ĳ���û��count�ͽ����ַ�'\0'���ƹ�ȥ
*/
//char* my_strncpy(char* dest, const char* src, size_t count){
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	char* str = dest;
//
//	while (count && (*str++ = *src++))//��������ֻҪ��һ����0���Ǽ� ���˳�ѭ��
//		count--;
//
//	if (count) 
//		while (--count) //����������˵��(*str++ = *src++)�� '\0'�˵��ǵ�ʱû��count��һ�����Դ˴�--countҪ�ȼ�һ���ж�
//			*str++ = '\0';
//			
//	//����һ��ʵ����ʽ
//	//while (count) {  
//	//	if (*src == '\0') {
//	//		*str++ = '\0';
//	//	}else{
//	//		*str++ = *src++;
//	//	}
//	//	count--;
//	//}
//
//	return dest;
//}


/*
* ���ֵ�˳��ĶԱ���ߺ��ұ��ַ���С
* Ҫ��ָ��������Χ��
* 
*/
//int my_strncmp(const char* lhs, const char* rhs, size_t count){
//
//	assert(lhs != NULL);
//	assert(rhs != NULL);
//
//	while (*lhs == *rhs) {
//		if (*lhs == '\0' ) {//��ʾ�����ڶ���'\0'��β��ʱ��һֱ�����
//			return 0;
//		}
//		count--;
//		if (count == 0) {
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
char* my_strncat(char* dest, const char* src, size_t count) {
	assert(dest != NULL);
	assert(src != NULL);
	char* strcat = dest;

	while (*strcat++);

	strcat--;//��ʱҪ��һ ��Ϊ*strcatΪ���ַ���ʱ�� strcatָ������һ���ֽ�

	while (count--)
		if (!(*strcat++ = *src++))//�����ʱ *srcΪ���ַ�'\0'����Ҫ������
			return dest;

	*strcat = '\0';//�ߵ�������˵��count�Ѿ�������

	//while (*strcat) {
	//	strcat++;
	//}
	//while (count-- && (*strcat++ = *src++));
	//printf("%d %d\n", *strcat,count);
	//if (count == -1) {
	//	*strcat = '\0';
	//	printf("%d\n", *strcat);
	//}
	return dest;
}

int main() {

	//char a[20] = "hell\0ox";//Ҫ���㹻�ĳ���������洢���Ƶĳ���
	//char b[] = "world";
	//char* ret = my_strncpy(a, b, 10);
	//printf("%s\n",ret);

	//char a[] = "abcdef";
	//char b[] = "abcdff";
	//int ret = my_strncmp(a, b,4);
	//printf("%d\n",ret);


	char a[20] = "hello \0abcdef";// Ҫ���㹻�ռ� ��Ϊ���鲻���Զ���󳤶�
	char b[] = "worldjhgfjkll";
	char* ret = my_strncat(a, b,10);
	printf("%s\n", ret);

	return 0;
}