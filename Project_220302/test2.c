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
//	//声明一个函数指针数组
//
//	int (*pfArry[5])(int, int) = {Add,Subtraction,Multiply,Division,Xor};
//	int len = sizeof(pfArry) / sizeof(pfArry[0]);
//	printf("%d\n",len);
//	for (int i = 0;i<len;i++) {
//		printf("%d\n",pfArry[i](2,3));
//	}
//
//	int arr[10] = {0};
//	int(*p)[10] = &arr;//数组指针
//
//	int (*pfArr[4])(int, int);// 是一个数组 一个指针数组，指针指向一个 int (int,int)的函数
//
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
// //ppfArr是一个指针 ，指针指向的是一个数组 数组有四个指针元素，每个指针类型是函数指针
//
//	return 0;
//}