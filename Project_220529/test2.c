//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include "unistd.h"
//
//void proc() {
//	int i = 0;
//	char buf[102];
//	memset(buf, '\0', sizeof(buf));//�������ʼ��Ϊ0
//	const char* lable = "|/-\\";
//	while (i <= 100) {
//
//		printf("[%-101s][%d%%][%c]\r",buf,i,lable[i%4]);
//		fflush(stdout);
//		buf[i] = '=';
//		i++;
//		//usleep(10000);
//	}
//	printf("\n");
//
//
//
//
//}
//
//
//int main() {
//
//	//char a, b,c;
//
//	//scanf("%c", &a);
//	// getchar();
//	//scanf("%c", &b);
//	////scanf("%c", &c);
//	////a = getchar();
//	////b = getchar();
//	////c = getchar();
//
//	//printf("%c\n",a);
//	//printf("%c\n",b);
//	////printf("%c\n", c);
//	//printf("---------------------");
//
//
//
//	// (*(void(*)())0)();  //��0��ַǿת��һ��ָ�򷵻�ֵΪvoid�ĺ����ĺ���ָ�룬Ȼ����������ַ���ĺ���
//	// void(*signal(int,void(*)(int)))(int)  //signal����������������һ��������int��һ��������һ������ָ�루ָ��ָ��void(int)�ĺ�������signal�ķ���ֵ��һ��ָ��
//	                                                         //�������ֵ��ָ�� ָ�����һ������void(int)  ����˵����һ������ָ�������
//
//	//char filename[] = "etc/passwd";
//	//char* name = "etc/passwd";
//	//printf("%s\n", filename);
//	//printf("%s\n", name);
//	//printf("%d\n", sizeof(filename));
//	//printf("%d\n", sizeof(name));
//
//	//proc();
//	const char* lable = "|/-\\";
//	
//
//	printf("%s", lable);
//	return 0;
//
//}