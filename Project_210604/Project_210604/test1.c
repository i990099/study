//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
////int main() {
////
////
////	int i = 0;
////
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////
////
////	printf("%p %p\n",&i,arr);
////
////	for (i = 0;i<13;i++) {
////		printf("hehe\n");
////		arr[i] = 0;
////	}
////
////	return 0;
////}
//
///*
//* 通过地址作差计算字符串长度
//*/
//int my_strlen(char* arr) {
//	char* p = arr;
//	while (*++arr != 0) {
//		;
//	}
//	return arr - p;
//}
//
///*
//* 将源字符串拷贝到目标字符串
//*/
//char* my_strcpy(char* destiantion,char* source) {
//	char* arr = destiantion;
//	/*while (*source != 0) {
//		*destiantion = *source;
//		source++;
//		destiantion++;
//	}
//	if (*source == 0) {
//		*destiantion = *source;
//	}*/
//	printf("%p\n", destiantion);
//	while (*destiantion++ = *source++) {// 当最后一个值赋完之后此时 结果为0 假 退出，整个复制完成
//		;
//	}
//
//	return arr;
//
//}
//
//
//
//
//int main() {
//
//	char arr1[] = "#############";
//
//	char arr2[] = "hello bit";
//
//	int len1 = strlen(arr1);
//
//	int len2 = strlen(arr2);
//
//	printf("len1=%d len2=%d\n", len1, len2);
//
//	int len_1 = my_strlen(arr1);
//
//	int len_2 = my_strlen(arr2);
//
//	printf("len_1=%d len_2=%d\n", len_1, len_2);
//
//	printf("arr1=%s arr2=%s\n",arr1,arr2);
//	/*char* arr3 = strcpy(arr1,arr2);
//
//	printf("arr1=%s arr2=%s arr3=%s\n",arr1,arr2,arr3);*/
//
//	char* arr3 = my_strcpy(arr1, arr2);
//
//	printf("arr1=%s arr2=%s arr3=%s\n", arr1, arr2, arr3);
//	
//	printf("len1=%d len2=%d\n", strlen(arr1), strlen(arr2));
//	return 0;
//}
//
