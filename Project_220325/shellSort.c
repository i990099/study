//#include<stdio.h>
//
//
///**
//ϣ������
//��������
//���� increment = len/2 
//ʱ�临�Ӷȣ���� O(n^2)  �� ƽʱ��   O(n^(3/2))  O(n^(4/3))
//�ռ临�Ӷȣ�O(1) ֻ�õ���һ������ռ���ڴ�
//�㷨�ȶ��ԣ����ȶ�
//��ֵ��ͬ��Ԫ��������ǰ����������λ�ò����ʾ�ȶ������λ�ñ��˱�ʾ���ȶ���
//
//**/
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
////ϣ������
//void shell_sort(int arry[],int len) {
//	print_arry(arry, len);
//	int inc;//���� len/2 
//	//��ʼ���� len/2  ,ÿһ��֮�� �ٳ���2
//	for (inc = len / 2; inc > 0; inc /= 2) {
//
//		for (int i = inc; i < len; i++) {// ��ÿ��������Χ�ڵ������в�������
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