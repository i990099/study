//#include<stdio.h>
//
///**
//
//选择排序算法
//时间复杂度：O(n^2)
//空间复杂度：O(1) 只用到了一个数组占用内存
//算法稳定性：不稳定  比如 2  5  6  5  3   4  排序后第一个5和第二个5的相对位置互换了
//（值相同的元素在排序前和排序后相对位置不变表示稳定，相对位置变了表示不稳定）
//
//**/
//
//
//
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
////交换两个指定的值
//void swap(int *a,int*b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
////选择排序
//
//void selection_sort(int arry[] , int len) {
//
//	print_arry(arry,len);
//	int min;
//	for (int i = 0; i < len-1; i++) {
//		min = i;//第一个元素假设为最小值 将最小值的下标保存下来
//		for (int j = i + 1; j < len ; j++) {//在剩余的元素中找到最小值
//			if (arry[j] < arry[min]) {
//				min = j;//将最小值的下标保存下来
//			}
//		}
//		swap(&arry[i], &arry[min]);//将前面指向的元素与最小值交换
//		print_arry(arry, len);
//	}
//
//
//}
//
//int main() {
//
//	int arry[] = {6,2,5,7,9,1,8,4,5,3,10};
//	int len = sizeof(arry) / sizeof(arry[0]);
//	//print_arry(arry, len);
//	selection_sort(arry, len);
// 
//
//
//
//}