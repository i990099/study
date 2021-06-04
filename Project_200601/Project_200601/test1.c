//
//#include<stdio.h>
//#include <stdlib.h>
//
//
//int my_strlen(char* str) {
//
//	//assert(str != NULL);//如果这个具有函数形式的宏的参数表达式比较等于零（即表达式为false），则将一条消息写入标准错误设备并中止被调用，终止程序执行。
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
//int my_strlen(char*);//递归方式计算
//int my_strlen2(char* );//计数的方式计算
//int my_strlen3(char*);//地址作差的方式计算
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
//	//itoa(input,buffer,2);//将指定数字转换成二进制字符串 第一个参数是数字 第二个参数是字符数组 第三个参数是 进制数
//
//	//printf("%s \n", buffer);
//
//	return 0;
//}