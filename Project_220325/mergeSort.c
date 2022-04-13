#include<stdio.h>
#include<stdlib.h>


/*
*  归并排序
*  时间复杂度：O(nlog2n)  
*  空间复杂度：O(n) 
*/

//打印数组的值
void print_arry(int arry[], int len) {

    for (int i = 0; i < len; i++) {
        printf("%d  ", arry[i]);
    }

    printf("\n");

}

void merge(int arry[], int tempArr[], int left, int mid,int right) {
    //标记左半区第一个未排序的元素
    int l_pos = left;
    //标记右半区第一个未排序的元素
    int r_pos = mid + 1;
    //临时数组元素的下标
    int pos = left;//从左边开始合并
    //合并
    while (l_pos<=mid && r_pos <= right) {
        if (arry[l_pos] < arry[r_pos]) {
            tempArr[pos++] = arry[l_pos++];
        }
        else {
            tempArr[pos++] = arry[r_pos++];
        }
    }
    //合并左半区剩余的元素
    while (l_pos <= mid) {
        tempArr[pos++] = arry[l_pos++];
    }
    //合并右半区剩余的元素
    while (r_pos <= right) {
        tempArr[pos++] = arry[r_pos++];
    }
    //把临时数组合并后的元素复制到原来的数组中去
    while (left <= right) {
        arry[left] = tempArr[left];
        left++;
    }
}

//归并排序
void msort(int arry[],int tempArr[],int left,int right) {
    //如果只有一个元素不进行排序

    if (left < right) {//表示元素个数大于1
        //找中间点
        int mid = left + (right - left) / 2;//防止溢出
        //划分左半区
        //printf("左 %d  %d  %d \n", left,right, mid);
        msort(arry, tempArr,left,mid);
        //划分右半区
        //printf("右 %d  %d  %d \n", left, right, mid);
        msort(arry, tempArr, mid+1, right);
        //合并
        //printf("合 %d  %d  %d \n", left,right, mid);
        merge(arry, tempArr, left,mid, right);

    }

}

void merge_sort(int arr[],int n) {
    int* tempArr = (int*)malloc(n * sizeof(int));
    if (tempArr) {
        msort(arr,tempArr,0,n-1);
        free(tempArr);
    }
    else {
        printf("failed");
    }
}



int main() {

    int arr[] = {2,4,3,5,7,12,9,1,0};

    int len = sizeof(arr) / sizeof(arr[0]);
    print_arry(arr, len);
    merge_sort(arr, len);
    print_arry(arr, len);

    return 0;

}