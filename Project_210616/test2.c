#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<assert.h>



/*
* 将源字符串复制到目标字符串中按指定个数复制如果src的长度没有count就将空字符'\0'复制过去
*/
//char* my_strncpy(char* dest, const char* src, size_t count){
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	char* str = dest;
//
//	while (count && (*str++ = *src++))//两个条件只要有一个是0就是假 就退出循环
//		count--;
//
//	if (count) 
//		while (--count) //进到这里来说明(*str++ = *src++)是 '\0'了但是当时没有count减一，所以此处--count要先减一再判断
//			*str++ = '\0';
//			
//	//另外一种实现形式
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
* 按字典顺序的对比左边和右边字符大小
* 要在指定数量范围内
* 
*/
//int my_strncmp(const char* lhs, const char* rhs, size_t count){
//
//	assert(lhs != NULL);
//	assert(rhs != NULL);
//
//	while (*lhs == *rhs) {
//		if (*lhs == '\0' ) {//表示两个在都是'\0'结尾的时候一直都相等
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
* 先找到dest的结束符'\0'然后开始追加并将'\0'替换成src的第一个字符 最后也将src的'\0'追加过来
*/
char* my_strncat(char* dest, const char* src, size_t count) {
	assert(dest != NULL);
	assert(src != NULL);
	char* strcat = dest;

	while (*strcat++);

	strcat--;//此时要减一 因为*strcat为空字符的时候 strcat指向了下一个字节

	while (count--)
		if (!(*strcat++ = *src++))//如果此时 *src为空字符'\0'了需要返回了
			return dest;

	*strcat = '\0';//走到这里来说明count已经减完了

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

	//char a[20] = "hell\0ox";//要有足够的长度来满足存储复制的长度
	//char b[] = "world";
	//char* ret = my_strncpy(a, b, 10);
	//printf("%s\n",ret);

	//char a[] = "abcdef";
	//char b[] = "abcdff";
	//int ret = my_strncmp(a, b,4);
	//printf("%d\n",ret);


	char a[20] = "hello \0abcdef";// 要有足够空间 因为数组不会自动变大长度
	char b[] = "worldjhgfjkll";
	char* ret = my_strncat(a, b,10);
	printf("%s\n", ret);

	return 0;
}