#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main() {
//
//	int arr[3] = {1,2,3};
//	//  arr[2] 相当于  *(arr+(2)) == *(arr+2)
//	//  2[arr] 相当于  *(2+(arr)) == *(2+arr) == *(arr+2)
//	printf("arr[2] = %d\n2[arr] = %d \n*(arr+2) = %d\n",arr[2],2[arr], *(arr + 2));
//	printf("----------------分割线--------------------\n");
//	// arr 可以进行加减法运算，但是不能进行自增或者自减运算  因为数组名表示的是地址常量
//	// p  可以进行加减法运算，也可以自增或者自减运算  因为p是指针变量
//	int* p = arr;
//	printf("p[2] = %d\n2[p] = %d \n*(p+2) = %d\n", p[2], 2[p], *(p + 2));
//	return 0;
//}

/*
* 获取字符串长度
*/
//size_t my_strlen(const char*  str) {
//	assert(str != NULL);//断言 如果为假 打印错误日志并终止程序
//	
//	//第一种方式 计数
//	// size_t count = 0;
//	//while (*str++)
//	//	count++;
//	//return count;
//
//	//第二种方式 地址作差
//	//if (*str == '\0') {
//	//	return 0;
//	//}
//	//size_t len = 0;
//	//char* c_str = str;
//	//while (*++str);
//	//return (size_t)(str - c_str);
//	
//	//第三种方式 递归
//	//if(*str == '\0') {
//	//	return 0;
//	//}
//	//else {
//	//	return 1 + my_strlen(str + 1);
//	//}
//
//}

/*
* 将源字符串复制到目标字符串中空字符串也会被复制过去 而且以'\0'结束
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
* 按字典顺序对比左边和右边字符大小
*/
//int my_strcmp(const char* lhs, const char* rhs){
//
//	assert(lhs != NULL);
//	assert(rhs != NULL);
//
//	while (*lhs == *rhs) {
//		if (*lhs == '\0' ) {//表示两个在都是'\0'结尾的时候一直都相等
//			return 0;
//		}
//		lhs++;
//		rhs++;
//	}
//	return (*lhs - *rhs);
//}

/*
* 先找到dest的结束符'\0'然后开始追加并将'\0'替换成src的第一个字符 最后也将src的'\0'追加过来
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

	char a[20] = "hello \0xxxxx";// 要有足够空间 因为数组不会自动变大长度
	char b[] = "world";

	char* ret = my_strcat(a,b);
	printf("%s\n",ret);

	return 0;
}