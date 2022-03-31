//#include<stdio.h>
//
///**
//* 
//插入排序算法
//时间复杂度：最好情况下是基本有序O(n)比较次数最少 ，最坏情况下倒序 O(n ^ 2)比较次数多
//空间复杂度： O(1) 只用到了一个数组占用内存
//算法稳定性：不稳定 （值相同的元素在排序前和排序后相对位置不变表示稳定，相对位置变了表示不稳定）
//
//*/
//void print_arry(int arry[] ,int len) {
//
//	for (int i = 0;i<len;i++) {
//		printf("%d  ",arry[i]);
//	}
//
//	printf("\n");
//
//}
//
//
//void insertSort(int arry[],int len) {
//
//	for (int i = 1; i < len; i++) {
//		print_arry(arry, len);
//		printf("\n");
//		int key = arry[i];//将待插入的值先拿出
//		int j = i - 1;//待插入值的前一个元素
//		while (j >= 0 && arry[j] > key) {//当待插入值前一位的元素大于待插入的元素时，
//			arry[j+1] = arry[j];//每次都把较大值往后移动一个位置
//			j--;//向前移位一个元素  当小于0 的时候表示此时指向已经不在数组内了
//			print_arry(arry, len);
//		}
//		printf("\n");
//		arry[j + 1] = key;
//
//	}
//	print_arry(arry, len);
//
//}
//
//
//int main() {
//
//	int arry[] = { 9,8,10,4,7,2,6,5,1,3 };
//	int len = sizeof(arry) / sizeof(arry[0]);
//	insertSort(arry,len);
//
//
//	return 0;
//
//
//}