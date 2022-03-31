//#include<stdio.h>
//
//
///**
//冒泡排序算法
//时间复杂度：O(n^2)
//空间复杂度：O(1) 只用到了一个数组占用内存
//算法稳定性：稳定 
//（值相同的元素在排序前和排序后相对位置不变表示稳定，相对位置变了表示不稳定）
//
//**/
//
//
////打印数组的值
//void print_arry(int arry[], int len) {
//
//	for (int i = 0; i < len; i++) {
//		printf("%d  ", arry[i]);
//	}
//
//	printf("\n");
//
//}
//
//
///*
//* 交换两个指定的值
//* 异或方式来交换 比如 a=2的二进制是10 ，b=3的二进制是 11  
//*     a = a^b  = 10^11 =01 = 1
//*     b = a^b  = 01^11 =10 = 2
//*     a = a^b  = 01^10 =11 = 3
//*   此时 a = 3  ,b = 2 达到了交换值的效果
//*  弊端是地址相同的不能正常交换数据 因为相同地址的数值 异或时只要一个变化两个都会跟着变成0
//*/
//void swap(int* a, int* b) {
//	if (a == b)return;//地址相同值也相同，更改其中一个值另一个也会自动改变所以不予交换
//	*a = *a^* b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//
//
//void bubble_sort(int arry[], int len) {
//	print_arry(arry, len);
//	for (int i = 0; i < len; i++) {
//		for (int j = 0; j < len-i-1; j++) {
//			if (arry[j] > arry[j+1]) {
//				swap(&arry[j], &arry[j+1]);
//				print_arry(arry, len);
//			}
//		}
//	}
//
//}
//
//int main() {
//
//	int arry[] = {2,7,1,9,34,10,4,3,7,6,8,12};
//	int len = sizeof(arry) / sizeof(arry[0]);
//	bubble_sort(arry, len);
//
//
//
//
//
//}