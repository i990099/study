//#include<stdio.h>
//
///**
//* 
//���������㷨
//ʱ�临�Ӷȣ����������ǻ�������O(n)�Ƚϴ������� �������µ��� O(n ^ 2)�Ƚϴ�����
//�ռ临�Ӷȣ� O(1) ֻ�õ���һ������ռ���ڴ�
//�㷨�ȶ��ԣ����ȶ� ��ֵ��ͬ��Ԫ��������ǰ����������λ�ò����ʾ�ȶ������λ�ñ��˱�ʾ���ȶ���
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
//		int key = arry[i];//���������ֵ���ó�
//		int j = i - 1;//������ֵ��ǰһ��Ԫ��
//		while (j >= 0 && arry[j] > key) {//��������ֵǰһλ��Ԫ�ش��ڴ������Ԫ��ʱ��
//			arry[j+1] = arry[j];//ÿ�ζ��ѽϴ�ֵ�����ƶ�һ��λ��
//			j--;//��ǰ��λһ��Ԫ��  ��С��0 ��ʱ���ʾ��ʱָ���Ѿ�������������
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