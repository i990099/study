//#define _CRT_SECURE_NO_WARNINGS 0
//#include<stdio.h>
//
//
////交换数值
//// 弊端是地址相同的不能正常交换数据 因为相同地址的数值 异或时只要一个变化两个都会跟着变成0
//void swap(int* a, int* b) {
//	if (a == b)return;
//	printf("交换前： %d    %d   地址%p  %p  ：\n", *a, *b,a,b);
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//
//	//int temp = *a;
//	//*a = *b;
//	//*b = temp;
//	printf("交换后： %d    %d   地址%p  %p  ：\n", *a, *b, a, b);
//}
//
//int main(){
//
//	//int x;
//	//float y;
//
//	//scanf("%3d%f",&x,&y);
//
//	//printf("%d   %f", x, y);
//
//	int a = 2;
//	int b = 2;
//
//	int arry[] = {2,2};
//
//	swap(&arry[0], &arry[1]);
//
//
//
//return 0;
//
//}