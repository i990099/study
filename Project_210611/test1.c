//#include<stdio.h>
//#include<string.h>
//
//
//int my_strlen(char* str) {
//
//	//assert(str != NULL);//如果这个具有函数形式的宏的参数表达式比较等于零（即表达式为false），则将一条消息写入标准错误设备并中止被调用，终止程序执行。
//	//printf("str= %p\n",str);
//	printf("str= %p *str= %c 十六进制%p\n",str, *str, *str);
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
////int my_strlen(char*);//递归方式计算
////int my_strlen2(char* );//计数的方式计算
////int my_strlen3(char*);//地址作差的方式计算
//
//int main() {
//
//	char arr[] = "abcdef";
//	printf("%d\n",strlen(arr));//char* 类型 arr 表示首元素地址 长度是6
//	printf("%d\n", strlen(arr+0));//char* 类型 arr+0首元素地址+0还是首元素地址 长度是 6
//	//printf("%d\n", strlen(*arr));//*arr表示的是一个具体的char类型的数值  而strlen的参数是const char*  所以会报错
//	//printf("%d\n", strlen(arr[1]));//arr[1]表示的是一个具体的char类型的数值 而strlen的参数是const char*  所以会报错
//	printf("%d\n", strlen(&arr));//&arr 表示首元素地址 长度是6
//	printf("%d\n", strlen(&arr+1));//随机值 越过一个数组的长度之后的地址
//	printf("%d\n", strlen(&arr[0]+1));//第二个元素的地址开始的 所以长度是5
//
//
//	char* p = "abcdef";
//
//	//int len = my_strlen2(&p);
//
//	//printf("%d\n",len);
//
//
//	printf("%d  %d\n", strlen(p), my_strlen(p));//char* 类型 p表示首元素地址 长度是6
//	printf("-------------------------------------------------------------\n");
//	printf("%d  %d\n", strlen(p + 1), my_strlen(p + 1));//char* 类型 p+1表示下一个元素的地址 长度是5
//	//printf("%d\n", strlen(*p));//*p表示的是一个具体的char类型的数值  而strlen的参数是const char* 所以会报错
//	//printf("%d\n", strlen(p[0]));//p[0]表示的是一个具体的char类型的数值  而strlen的参数是const char* 所以会报错
//	printf("**&p=%c\n",**&p);
//	printf("p=%p\np+1=%p\n*&p=%p\n&p=%p\n", p,p+1,*&p,&p);
//	printf("%d  %d\n", strlen(&p), my_strlen(&p));//&p表示的是存放首元素a地址的char*指针p自己的地址。
//	////例如a元素的地址是 0x00837B30 放在p的内存中，而指针p自己的地址是 0x0093FB88 此时 传参进去（ 0x0093FB88） 
//	////strlen 内部函数解引用*之后得到的是数值 30 7B 83 00   以0为停止符所以计算长度就是 3 
//
//	printf("%d  %d\n", strlen(&p + 1), my_strlen(&p + 1));//随机值   &p + 1 表示是p指针地址+（一个指针长度 4或8个字节）的另一个地址
//	printf("%d  %d\n", strlen(&p[0] + 1), my_strlen(&p[0] + 1));////char* 类型 &p[0] + 1表示下一个元素的地址  长度是5
//
//
//	return 0;
//}