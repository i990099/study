//#include<stdio.h>
//
//
///*
//*  ��������
//*  ʱ�临�Ӷȣ�O(nlog2n)  ������� O(n^2) 
//*  �ռ临�Ӷȣ�O(n) ֻ�õ���һ������ռ���ڴ�
//*/
//
//
////��ӡ�����ֵ
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
////������ֵ
//void swap(int* a, int* b) {
//    //if (a == b)return;//��ַ��ֵͬҲ��ͬ����������һ��ֵ��һ��Ҳ���Զ��ı����Բ��轻��
//    printf("����ǰ�� %d    %d   ��ַ%p  %p  ��\n", *a, *b, a, b);
//   /* *a = *a ^ *b;
//    *b = *a ^ *b;
//    *a = *a ^ *b;*/
//
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//    //printf("������ %d    %d   ��ַ%p  %p  ��\n", *a, *b, a, b);
//}
//
///**
// * @brief ��������
// *   ����˼�룺�ѱ�pivotС�Ļ���ǰ��
// *
// * @param arr ����
// * @param low ���������
// * @param high ���ұ�����
// * @return int ����λ��
// */
//int partition(int arr[], int low, int high)
//{
//    int pivot = arr[high];
//    printf("��׼ֵ�� %d\n", pivot);
//    int i = low;//����һ��ָ�� ���������ƶ�
//
//    for (int j = low; j < high; j++)
//    {
//        // ��pivotС�ģ�ȫ������ǰ��ȥ
//        if (arr[j] < pivot)
//            swap(&arr[j], &arr[i++]);
//
//        print_arry(arr, 5);
//    }
//    // ��ʱ��iָ���Ԫ��һ�����ڵ���pivot
//    swap(&arr[high], &arr[i]);
//    return i;
//}
//
///**
// * @brief �ݹ黮��
// *
// * @param arr ����
// * @param low ��߽��±�
// * @param high �ұ߽��±�
// */
//void qsort(int arr[], int low, int high)
//{
//    if (low < high)
//    {
//        int mid = partition(arr, low, high);//���ػ�׼ֵ
//        qsort(arr, low, mid - 1);//�����Ի�׼ֵ��ߵ����ݽ��л�׼����
//        qsort(arr, mid + 1, high);//�����Ի�׼ֵ�ұߵ����ݽ��л�׼����
//    }
//}
//
///**
// * @brief �����������
// *
// * @param arr ����
// * @param len ����
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
