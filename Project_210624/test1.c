//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
//
////int main() {
////
////
////	//int* p = (int*)malloc(5 * sizeof(int));
////
////	int* p = (int*)calloc(5, sizeof(int));
////
////	if (p != NULL) {
////		int* q = (int*)realloc(p, 5 * sizeof(int));
////		
////		if (q != NULL) {
////			p = q;
////		}
////
////	}
////
////	if (p != NULL) {
////		for (size_t i = 0; i < 10; i++)
////		{
////			*(p + i) = i;
////		}
////		for (size_t i = 0; i < 10; i++)
////		{
////			printf("%d  ", *(p + i));
////		}
////
////		printf("\n");
////	}
////	
////	free(p);
////	p = NULL;
////
////
////
////	return 0;
////}
//
//
//
//typedef struct Stu {
//
//	char name[10];
//
//	int age;
//
//}Stu;
//
////冒泡排序
//void bubble(int arr[],int sz) {
//
//	for (int i = 0;i<sz-1;i++) {
//	
//		for (int j = 0;j<sz-i-1;j++) {
//
//			if (arr[j] > arr[j+1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//
//		}
//	
//	}
//}
//
////数据交换
////一个字节一个字节的交换
//void swap(char*  buf1, char* buf2, int size) {
//
//	for (int i = 0; i < size;i++) {
//		char temp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = temp;
//		buf1++;
//		buf2++;
//	
//	}
//
//
//
//}
////自己写的排序算法
////第一个参数是要排序的数组
////第二个参数是数组元素个数
////第三个参数是每个元素所占内存大小，单位字节
////第四个参数是 进行具体实现比较功能的函数的指针
//void bubble_sort(void* base, size_t num, size_t size,int (*compar)(const void* e1, const void* e2)) {
//
//	for (size_t i = 0;i < num - 1;i++) {
//
//		for (size_t j = 0;j < num - i - 1;j++) {
//
//			char*  e1 = (char*)base+j* size;
//			char*  e2 = (char*)base + (j+1) * size;
//
//			if (compar(e1, e2) > 0) {
//				swap(e1, e2, size);
//			}
//
//		}
//
//	}
//	
//}
//
//
//
//int cmp_int(const void* e1, const void* e2) {
//
//	//比较两个整形的值
//	//大于0 表示 e1 大于e2
//	//小于0 表示 e1 小于 e2
//	//等于0 表示 e1 等于 e2
//
//	return (*(int*)e1 - *(int*)e2);
//
//
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2) {
//
//	//比较两个整形的值
//	//大于0 表示 e1 大于e2
//	//小于0 表示 e1 小于 e2
//	//等于0 表示 e1 等于 e2
//
//	//字符串比较要用strcmp
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2) {
//
//	//比较两个整形的值
//	//大于0 表示 e1 大于e2
//	//小于0 表示 e1 小于 e2
//	//等于0 表示 e1 等于 e2
//
//	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
//
//}
//
//int main() {
//	
//	//int arr[10] = { 9,7,8,5,4,6,2,3,1,0 };
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	////bubble(arr, sz); 
//
//	////quick sort 快速排序
//	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	////qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//for (int i = 0;i<10;i++) {
//	//	printf("%d ", arr[i]);
//	//}
//	//printf("\n");
//
//
//	Stu s[3] = { {"jsd",22}, {"dwa",12} , {"hfcf",33} };
//
//	int sz = sizeof(s) / sizeof(s[0]);
//	printf("排序前\n");
//	printf("%-10s\t%-4s\n", "姓名", "年龄");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%-10s\t%-4d\n",s[i].name,s[i].age);
//	}
//
//
//	//第一个参数 待排序数组的首元素地址
//	//第二个参数 数组的个数
//	//第三个参数 数组单个元素所占内存大小 单位字节
//	//第四个参数 是函数指针 比较两个元素的所使用的函数的地址- 该函数需要自己实现
//	//函数指针的两个参数  是带比较的两个元素的地址
//	//qsort(s,3,sizeof(s[0]), cmp_stu_by_name);
//	bubble_sort(s, 3, sizeof(s[0]), cmp_stu_by_name);//按姓名
//	bubble_sort(s, 3, sizeof(s[0]), cmp_stu_by_age);//按年龄
//
//	printf("排序后\n");
//	printf("%-10s\t%-4s\n","姓名","年龄");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%-10s\t%-4d\n", s[i].name, s[i].age);
//	}
//
//
//
//	return 0;
//
//
//}
