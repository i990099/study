//#include<stdio.h>
//
//
///**
//堆排序
//时间复杂度：是 O(nlog2n)  ，
//空间复杂度：O(1) 只用到了一个数组占用内存
//算法稳定性：不稳定
//（值相同的元素在排序前和排序后相对位置不变表示稳定，相对位置变了表示不稳定）
//
//**/
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
////交换数值
//void swap(int* a, int* b) {
// if (a == b)return;//地址相同值也相同，更改其中一个值另一个也会自动改变所以不予交换
//	*a = *a^* b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//
///*
//*  找出大顶堆
//*  数组array长度 len 数组下标是  i 
//*  数组下标对应的父节点下标是  (i-1)/2
//*  数组下标对应的左子节点下标是  2i+1
//*  数组下标对应的右子节点下标是  2i+2
//* 
//*/
//void heapify(int arry[],int len,int i) {
//	int largest = i; //父节点  假设父节点是大顶堆
//	int lson = 2 * i + 1;//左孩子节点 的小标
//	int rson = 2 * i + 2;//右孩子节点 的下标
//
//	if (lson < len && arry[lson] > arry[largest])
//		largest = lson;
//	if (rson < len && arry[rson] > arry[largest])
//		largest = rson;
//
//	if (largest != i) {
//		swap(&arry[largest],&arry[i]);
//		heapify(arry,len ,largest);//递归维护大顶堆
//	}
//
//}
//
////堆排序
//void heap_sort(int arry[], int len) {
//	//int i;
//	//开始建堆
//	//数组下标对应的父节点下标是index=  (i-1)/2  自底向上建立大顶堆也就是最后一个数组下标 i = len-1， index=  (len-1-1)/2 = len/2-2
//	for (int i = len / 2 - 1; i >= 0; i--) {
//		heapify(arry,len,i);
//	}
//
//	//排序
//	for (int i = len - 1; i > 0; i--) {
//		swap(&arry[i], &arry[0]);	//找到大顶堆之后将堆的最后一个元素与堆顶元素互换 此时数组最后一个元素也就排好序了，接着排前面的
//		heapify(arry, i, 0);//因为已经拿走一个堆顶了，所以i已经不是固定长度了每次都会减少一个，然后从第一个开始接着建堆
//		print_arry(arry, len);
//	}
//
//}
//
//
//int main() {
//	int arry[] = { 2,7,1,9,34,10,4,3,7,6,8,12 };
//	int len = sizeof(arry) / sizeof(arry[0]);
//	print_arry(arry, len);
//	heap_sort(arry, len);
//	//print_arry(arry, len);
//	return 0;
//}