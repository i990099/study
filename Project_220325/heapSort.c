//#include<stdio.h>
//
//
///**
//������
//ʱ�临�Ӷȣ��� O(nlog2n)  ��
//�ռ临�Ӷȣ�O(1) ֻ�õ���һ������ռ���ڴ�
//�㷨�ȶ��ԣ����ȶ�
//��ֵ��ͬ��Ԫ��������ǰ����������λ�ò����ʾ�ȶ������λ�ñ��˱�ʾ���ȶ���
//
//**/
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
////������ֵ
//void swap(int* a, int* b) {
// if (a == b)return;//��ַ��ֵͬҲ��ͬ����������һ��ֵ��һ��Ҳ���Զ��ı����Բ��轻��
//	*a = *a^* b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//
///*
//*  �ҳ��󶥶�
//*  ����array���� len �����±���  i 
//*  �����±��Ӧ�ĸ��ڵ��±���  (i-1)/2
//*  �����±��Ӧ�����ӽڵ��±���  2i+1
//*  �����±��Ӧ�����ӽڵ��±���  2i+2
//* 
//*/
//void heapify(int arry[],int len,int i) {
//	int largest = i; //���ڵ�  ���踸�ڵ��Ǵ󶥶�
//	int lson = 2 * i + 1;//���ӽڵ� ��С��
//	int rson = 2 * i + 2;//�Һ��ӽڵ� ���±�
//
//	if (lson < len && arry[lson] > arry[largest])
//		largest = lson;
//	if (rson < len && arry[rson] > arry[largest])
//		largest = rson;
//
//	if (largest != i) {
//		swap(&arry[largest],&arry[i]);
//		heapify(arry,len ,largest);//�ݹ�ά���󶥶�
//	}
//
//}
//
////������
//void heap_sort(int arry[], int len) {
//	//int i;
//	//��ʼ����
//	//�����±��Ӧ�ĸ��ڵ��±���index=  (i-1)/2  �Ե����Ͻ����󶥶�Ҳ�������һ�������±� i = len-1�� index=  (len-1-1)/2 = len/2-2
//	for (int i = len / 2 - 1; i >= 0; i--) {
//		heapify(arry,len,i);
//	}
//
//	//����
//	for (int i = len - 1; i > 0; i--) {
//		swap(&arry[i], &arry[0]);	//�ҵ��󶥶�֮�󽫶ѵ����һ��Ԫ����Ѷ�Ԫ�ػ��� ��ʱ�������һ��Ԫ��Ҳ���ź����ˣ�������ǰ���
//		heapify(arry, i, 0);//��Ϊ�Ѿ�����һ���Ѷ��ˣ�����i�Ѿ����ǹ̶�������ÿ�ζ������һ����Ȼ��ӵ�һ����ʼ���Ž���
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