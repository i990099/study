//#include<stdio.h>
//
//
///**
//希尔排序
//依赖增量
//增量 increment = len/2 
//时间复杂度：最坏是 O(n^2)  ， 平时有   O(n^(3/2))  O(n^(4/3))
//空间复杂度：O(1) 只用到了一个数组占用内存
//算法稳定性：不稳定
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
////希尔排序
//void shell_sort(int arry[],int len) {
//	print_arry(arry, len);
//	int inc;//增量 len/2 
//	//初始增量 len/2  ,每一趟之后 再除以2
//	for (inc = len / 2; inc > 0; inc /= 2) {
//
//		for (int i = inc; i < len; i++) {// 对每个增量范围内的数进行插入排序
//			int key = arry[i];
//			int j = i - inc;
//			while (j >= 0 && arry[j] > key) {
//				arry[j + inc] = arry[j];
//				j -= inc;
//			} 
//			arry[j + inc] = key;
//			print_arry(arry, len);
//		}
//		printf("\n");
//		print_arry(arry, len);
//		printf("\n");
//	}
//
//}
//
//
//
//int main() {
//
//	int arry[] = { 2,7,1,9,34,10,4,3,7,6,8,12 };
//	int len = sizeof(arry) / sizeof(arry[0]);
//	shell_sort(arry, len);
//
//
//}