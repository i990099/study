//#include<stdio.h>
//
///**
//
//ѡ�������㷨
//ʱ�临�Ӷȣ�O(n^2)
//�ռ临�Ӷȣ�O(1) ֻ�õ���һ������ռ���ڴ�
//�㷨�ȶ��ԣ����ȶ�  ���� 2  5  6  5  3   4  ������һ��5�͵ڶ���5�����λ�û�����
//��ֵ��ͬ��Ԫ��������ǰ����������λ�ò����ʾ�ȶ������λ�ñ��˱�ʾ���ȶ���
//
//**/
//
//
//
//
//
////��ӡ�����ֵ
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
////��������ָ����ֵ
//void swap(int *a,int*b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
////ѡ������
//
//void selection_sort(int arry[] , int len) {
//
//	print_arry(arry,len);
//	int min;
//	for (int i = 0; i < len-1; i++) {
//		min = i;//��һ��Ԫ�ؼ���Ϊ��Сֵ ����Сֵ���±걣������
//		for (int j = i + 1; j < len ; j++) {//��ʣ���Ԫ�����ҵ���Сֵ
//			if (arry[j] < arry[min]) {
//				min = j;//����Сֵ���±걣������
//			}
//		}
//		swap(&arry[i], &arry[min]);//��ǰ��ָ���Ԫ������Сֵ����
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