#include<stdio.h>
#include<stdlib.h>


/*
*  �鲢����
*  ʱ�临�Ӷȣ�O(nlog2n)  
*  �ռ临�Ӷȣ�O(n) 
*/

//��ӡ�����ֵ
void print_arry(int arry[], int len) {

    for (int i = 0; i < len; i++) {
        printf("%d  ", arry[i]);
    }

    printf("\n");

}

void merge(int arry[], int tempArr[], int left, int mid,int right) {
    //����������һ��δ�����Ԫ��
    int l_pos = left;
    //����Ұ�����һ��δ�����Ԫ��
    int r_pos = mid + 1;
    //��ʱ����Ԫ�ص��±�
    int pos = left;//����߿�ʼ�ϲ�
    //�ϲ�
    while (l_pos<=mid && r_pos <= right) {
        if (arry[l_pos] < arry[r_pos]) {
            tempArr[pos++] = arry[l_pos++];
        }
        else {
            tempArr[pos++] = arry[r_pos++];
        }
    }
    //�ϲ������ʣ���Ԫ��
    while (l_pos <= mid) {
        tempArr[pos++] = arry[l_pos++];
    }
    //�ϲ��Ұ���ʣ���Ԫ��
    while (r_pos <= right) {
        tempArr[pos++] = arry[r_pos++];
    }
    //����ʱ����ϲ����Ԫ�ظ��Ƶ�ԭ����������ȥ
    while (left <= right) {
        arry[left] = tempArr[left];
        left++;
    }
}

//�鲢����
void msort(int arry[],int tempArr[],int left,int right) {
    //���ֻ��һ��Ԫ�ز���������

    if (left < right) {//��ʾԪ�ظ�������1
        //���м��
        int mid = left + (right - left) / 2;//��ֹ���
        //���������
        //printf("�� %d  %d  %d \n", left,right, mid);
        msort(arry, tempArr,left,mid);
        //�����Ұ���
        //printf("�� %d  %d  %d \n", left, right, mid);
        msort(arry, tempArr, mid+1, right);
        //�ϲ�
        //printf("�� %d  %d  %d \n", left,right, mid);
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