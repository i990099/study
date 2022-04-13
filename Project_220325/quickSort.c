//#include<stdio.h>
//
//
///*
//*  快速排序
//*  时间复杂度：O(nlog2n)  ，最差是 O(n^2) 
//*  空间复杂度：O(n) 只用到了一个数组占用内存
//*/
//
//
////打印数组的值
//void print_arry(int arry[], int len) {
//
//    for (int i = 0; i < len; i++) {
//        printf("%d  ", arry[i]);
//    }
//
//    printf("\n");
//
//}
//
////交换数值
//void swap(int* a, int* b) {
//    //if (a == b)return;//地址相同值也相同，更改其中一个值另一个也会自动改变所以不予交换
//    printf("交换前： %d    %d   地址%p  %p  ：\n", *a, *b, a, b);
//   /* *a = *a ^ *b;
//    *b = *a ^ *b;
//    *a = *a ^ *b;*/
//
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//    //printf("交换后： %d    %d   地址%p  %p  ：\n", *a, *b, a, b);
//}
//
///**
// * @brief 快速排序
// *   大体思想：把比pivot小的换到前面
// *
// * @param arr 数组
// * @param low 最左边索引
// * @param high 最右边索引
// * @return int 划分位置
// */
//int partition(int arr[], int low, int high)
//{
//    int pivot = arr[high];
//    printf("基准值： %d\n", pivot);
//    int i = low;//理解成一个指针 从左向右移动
//
//    for (int j = low; j < high; j++)
//    {
//        // 比pivot小的，全部换到前面去
//        if (arr[j] < pivot)
//            swap(&arr[j], &arr[i++]);
//
//        print_arry(arr, 5);
//    }
//    // 此时，i指向的元素一定大于等于pivot
//    swap(&arr[high], &arr[i]);
//    return i;
//}
//
///**
// * @brief 递归划分
// *
// * @param arr 数字
// * @param low 左边界下标
// * @param high 右边界下标
// */
//void qsort(int arr[], int low, int high)
//{
//    if (low < high)
//    {
//        int mid = partition(arr, low, high);//返回基准值
//        qsort(arr, low, mid - 1);//继续对基准值左边的数据进行基准排序
//        qsort(arr, mid + 1, high);//继续对基准值右边的数据进行基准排序
//    }
//}
//
///**
// * @brief 快速排序入口
// *
// * @param arr 数组
// * @param len 长度
// */
//void quick_sort(int arr[], int len)
//{
//    qsort(arr, 0, len - 1);
//}
//
//
//
//int main() {
//
//    //int arry[] = { 2,7,1,9,34,10,4,3,7,6,8,12 };
//    int arry[] = { 2,7,1,9,5 };
//    int len = sizeof(arry) / sizeof(arry[0]);
//    print_arry(arry, len);
//    quick_sort(arry, len);
//    print_arry(arry, len);
//    return 0;
//
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
