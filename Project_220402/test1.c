//#include<stdio.h>
//#include<math.h>
//
//
///**
//*	��������Żʺ�
//*	ÿһ�з�һ��Ȼ����queen[i] ��ֵ��ʾ�����������һ���Զ�ȥ�ŵڶ���
//*	���� queen = {0��2��4��1��3} ��Ϊ�±��Ǵ���0�����Դ�queen[1] ��ʼ
//*	��1���ʺ��� queen[1] = 2 ��ʾ�����˵�1�еĵ�2���� 
//*  ��2���ʺ��� queen[2] = 4 ��ʾ�����˵�2�еĵ�4���� 
//*  ��3���ʺ��� queen[3] = 1 ��ʾ�����˵�3�еĵ�1���� 
//*  ��4���ʺ��� queen[4] = 3 ��ʾ�����˵�4�еĵ�3���� 
//*	��Ҫ�ҵ�ÿһ�ж�Ҫ����һ���ʺ�����Ҫ�ҵ����ŵķ��÷�����Ҫ��ÿһ�еĵ�һ�п�ʼ���Է���
//*	�����ĳһ���Ҳ������õ�λ����Ҫ���˵���һ�в�������һ�е�λ������Ӧ��һ�п����ҵ����ʷ���λ��
//*	��Ҫ��ͣ�������ҵ����ŷ�ʽ  ���ݷ�
//**/
//
//#define n 4
//
////�±��Ǳ�ʾ�ĵڼ����ʺ�Ԫ��ֵ��ʾ���ǵڼ��е���˼���� queen[1] = 2  ��ʾ��һ���ʺ� �ڵ�2��
//int queen[n + 1];
//
//void show() {
//
//	printf("(");
//
//	for (int i = 1;i<=n; i++) {
//		printf("%d",queen[i]);
//	}
//
//	printf(")\n");
//}
//
////�ж��Ƿ���ͬһ�л���ͬһ�Խ����ϵ�
////��Ϊÿһ��ֻ�ܷ���һ�����Բ��ÿ�����ͬһ�е�����
//int Place(int j) {// j ֵ��Ҫ���õĵ� j ��Ԫ��
//
//	for (int i = 1; i < j; i++) {
//		if (queen[i] == queen[j] || abs(queen[i] - queen[j]) == (j-i)) {
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//void Nqueen(int j) {
//
//	for (int i = 1; i <= n; i++) {
//		queen[j] = i;//��ʾ��j��Ԫ�ط��õ�����
//
//		if (Place(j)) {
//
//			if (j == n) {//Ԫ�ط�����ֱ����ʾ
//				show();
//			}
//			else {
//				Nqueen(j + 1);
//			
//			}
//
//
//		}
//
//
//	}
//
//
//}
//
//int main() {
//
//	Nqueen(1);
//
//	return 0;
//}
//
//
//
//
//
//