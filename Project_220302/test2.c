//#include<stdio.h>
//
//int Add(int a,int b) {
//
//	return a + b;
//}
//
//int Subtraction(int a, int b) {
//
//	return a - b;
//}
//
//int Multiply(int a, int b) {
//	return a * b;
//}
//
//int Division(int a, int b) {
//	return a / b;
//}
//
//int Xor(int a,int b) {
//
//	return a ^ b;
//}
//
//int main() {
//	//����һ������ָ������
//
//	int (*pfArry[5])(int, int) = {Add,Subtraction,Multiply,Division,Xor};
//	int len = sizeof(pfArry) / sizeof(pfArry[0]);
//	printf("%d\n",len);
//	for (int i = 0;i<len;i++) {
//		printf("%d\n",pfArry[i](2,3));
//	}
//
//	int arr[10] = {0};
//	int(*p)[10] = &arr;//����ָ��
//
//	int (*pfArr[4])(int, int);// ��һ������ һ��ָ�����飬ָ��ָ��һ�� int (int,int)�ĺ���
//
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
// //ppfArr��һ��ָ�� ��ָ��ָ�����һ������ �������ĸ�ָ��Ԫ�أ�ÿ��ָ�������Ǻ���ָ��
//
//	return 0;
//}