//#include<stdio.h>
//#include<string.h>
//
//
//int my_strlen(char* str) {
//
//	//assert(str != NULL);//���������к�����ʽ�ĺ�Ĳ������ʽ�Ƚϵ����㣨�����ʽΪfalse������һ����Ϣд���׼�����豸����ֹ�����ã���ֹ����ִ�С�
//	//printf("str= %p\n",str);
//	printf("str= %p *str= %c ʮ������%p\n",str, *str, *str);
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
//	printf("*str= %c\n", *str);
//	while (*str++) {
//		printf("*str= %c\n", *str);
//		count++;
//	}
//	return count;
//}
//int my_strlen3(char* str) {
//
//	char* p = str;
//	printf("*str= %c\n", *str);
//	while (*++str) {
//		printf("*str= %c\n", *str);
//		;
//	}
//	printf("*str= %c\n", *str);
//	//printf("%d\n",(str-p));
//
//	return str - p;
//	
//}
////int my_strlen(char*);//�ݹ鷽ʽ����
////int my_strlen2(char* );//�����ķ�ʽ����
////int my_strlen3(char*);//��ַ����ķ�ʽ����
//
//int main() {
//
//	char arr[] = "abcdef";
//	printf("%d\n",strlen(arr));//char* ���� arr ��ʾ��Ԫ�ص�ַ ������6
//	printf("%d\n", strlen(arr+0));//char* ���� arr+0��Ԫ�ص�ַ+0������Ԫ�ص�ַ ������ 6
//	//printf("%d\n", strlen(*arr));//*arr��ʾ����һ�������char���͵���ֵ  ��strlen�Ĳ�����const char*  ���Իᱨ��
//	//printf("%d\n", strlen(arr[1]));//arr[1]��ʾ����һ�������char���͵���ֵ ��strlen�Ĳ�����const char*  ���Իᱨ��
//	printf("%d\n", strlen(&arr));//&arr ��ʾ��Ԫ�ص�ַ ������6
//	printf("%d\n", strlen(&arr+1));//���ֵ Խ��һ������ĳ���֮��ĵ�ַ
//	printf("%d\n", strlen(&arr[0]+1));//�ڶ���Ԫ�صĵ�ַ��ʼ�� ���Գ�����5
//
//
//	char* p = "abcdef";
//
//	//int len = my_strlen2(&p);
//
//	//printf("%d\n",len);
//
//
//	printf("%d  %d\n", strlen(p), my_strlen(p));//char* ���� p��ʾ��Ԫ�ص�ַ ������6
//	printf("-------------------------------------------------------------\n");
//	printf("%d  %d\n", strlen(p + 1), my_strlen(p + 1));//char* ���� p+1��ʾ��һ��Ԫ�صĵ�ַ ������5
//	//printf("%d\n", strlen(*p));//*p��ʾ����һ�������char���͵���ֵ  ��strlen�Ĳ�����const char* ���Իᱨ��
//	//printf("%d\n", strlen(p[0]));//p[0]��ʾ����һ�������char���͵���ֵ  ��strlen�Ĳ�����const char* ���Իᱨ��
//	printf("**&p=%c\n",**&p);
//	printf("p=%p\np+1=%p\n*&p=%p\n&p=%p\n", p,p+1,*&p,&p);
//	printf("%d  %d\n", strlen(&p), my_strlen(&p));//&p��ʾ���Ǵ����Ԫ��a��ַ��char*ָ��p�Լ��ĵ�ַ��
//	////����aԪ�صĵ�ַ�� 0x00837B30 ����p���ڴ��У���ָ��p�Լ��ĵ�ַ�� 0x0093FB88 ��ʱ ���ν�ȥ�� 0x0093FB88�� 
//	////strlen �ڲ�����������*֮��õ�������ֵ 30 7B 83 00   ��0Ϊֹͣ�����Լ��㳤�Ⱦ��� 3 
//
//	printf("%d  %d\n", strlen(&p + 1), my_strlen(&p + 1));//���ֵ   &p + 1 ��ʾ��pָ���ַ+��һ��ָ�볤�� 4��8���ֽڣ�����һ����ַ
//	printf("%d  %d\n", strlen(&p[0] + 1), my_strlen(&p[0] + 1));////char* ���� &p[0] + 1��ʾ��һ��Ԫ�صĵ�ַ  ������5
//
//
//	return 0;
//}