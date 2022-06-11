//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include "unistd.h"
//
//void proc() {
//	int i = 0;
//	char buf[102];
//	memset(buf, '\0', sizeof(buf));//将数组初始化为0
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
//	// (*(void(*)())0)();  //将0地址强转成一个指向返回值为void的函数的函数指针，然后调用这个地址处的函数
//	// void(*signal(int,void(*)(int)))(int)  //signal函数有两个参数，一个参数是int，一个参数是一个函数指针（指针指向void(int)的函数）‘signal的返回值是一个指针
//	                                                         //这个返回值的指针 指向的是一个函数void(int)  总体说这是一个函数指针的声明
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