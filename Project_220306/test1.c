//#include<stdio.h>
//#include<string.h>
//
//
//int main() {
//
//	////��������
//	//int arr[] = {1, 2, 3, 4};
//	//printf("%p   %d\n", arr, sizeof(arr));// 16 ����������ռ�ֽ���
//	//printf("%p   %d\n", arr + 0, sizeof(arr+0));// 4/8 ��Ԫ�ص�ַ��ռ�ֽڵĴ�С
//	//printf("%p   %d\n", arr + 1,sizeof(arr+1));//  4/8 �ڶ���Ԫ�ص�ַ��ռ�ֽڵĴ�С
//	//printf("%p   %d\n", arr[1],sizeof(arr[1]));// 4  �ڶ���Ԫ������ֵ��ռ�ֽڵĴ�С
//	//printf("%p   %d\n", &arr,sizeof(&arr));// 4/8 ȡ����ĵ�ַ��ռ�ֽڵĴ�С
//	//printf("%p   %d\n", *&arr, sizeof(*&arr));//  16 ����������ռ�ֽ���
//	//printf("%p   %d\n", &arr + 1,sizeof(&arr+1));// 4/8 ���һ�����鳤��֮��ĵ�ַ ��������ַ��ռ�ֽڴ�С
//	//printf("%p   %d\n", &arr[0],sizeof(&arr[0]));// 4/8 ��Ԫ�ص�ַ��ռ�ֽڵĴ�С
//	//printf("%p   %d\n", &arr[0] + 1,sizeof(&arr[0]+1));// 4/8 �ڶ���Ԫ�ص�ַ��ռ�ֽڵĴ�С
//
//
//	//�ַ�����
//	//char arr[] = {'a',  'b',   'c',   'd',   'e',   'f', };
//	//printf("%d\n", sizeof(arr));// 6 ����������ռ�ֽڴ�С
//	//printf("%d\n", sizeof(arr+0));//4/8 �׵�ַ��ռ�ֽڴ�С
//	//printf("%d\n", sizeof(*arr));// 1 ��Ԫ����ռ�ֽڴ�С
//	//printf("%d\n", sizeof(arr[1]));// 1��Ԫ����ռ�ֽڴ�С
//	//printf("%d\n", sizeof(&arr));// 4/8 �����ַҲ�ǵ�ַ һ����ַ��ռ�ֽڵĴ�С
//	//printf("%d\n", sizeof(&arr+1));//4/8 ���һ�������ַҲ�ǵ�ַ һ����ַ��ռ�ֽڵĴ�С
//	//printf("%d\n", sizeof(&arr[0]+1));// 4/8�ڶ���Ԫ�ص�ַ��ռ��С 
//
//	//strlen�Ǽ��������0Ϊֹ���ֽ���
//	//printf("%d\n", strlen(arr));// ���ֵ
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	////printf("%d\n", strlen(*arr));// ����Ԫ�ؾ����ֵaҲ����97���ɵ�ַ����strlen �Ƿ������ڴ汨�� err  
//	////printf("%d\n", strlen(arr[1]));// �Եڶ���Ԫ�ؾ����ֵbҲ����98���ɵ�ַ����strlen �Ƿ������ڴ汨�� err  
//	//printf("%d\n", strlen(&arr));// ���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	//printf("%d\n", strlen(&arr[0] + 1));// ���ֵ-1
//
//
//	//char arr[] = { "abcdef" };
//	//printf("%d\n", sizeof(arr));// 7 ����������ռ�ֽڴ�С ���һ��Ԫ��\0��β
//	//printf("%d\n", sizeof(arr+0));//4/8 �׵�ַ��ռ�ֽڴ�С
//	//printf("%d\n", sizeof(*arr));// 1 ��Ԫ����ռ�ֽڴ�С
//	//printf("%d\n", sizeof(arr[1]));// 1��Ԫ����ռ�ֽڴ�С
//	//printf("%d\n", sizeof(&arr));// 4/8 �����ַҲ�ǵ�ַ һ����ַ��ռ�ֽڵĴ�С
//	//printf("%d\n", sizeof(&arr+1));//4/8 ���һ�������ַҲ�ǵ�ַ һ����ַ��ռ�ֽڵĴ�С
//	//printf("%d\n", sizeof(&arr[0]+1));// 4/8�ڶ���Ԫ�ص�ַ��ռ��С 
//
//		//strlen�Ǽ��������0Ϊֹ���ֽ���
//	//printf("%d\n", strlen(arr));// 6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));// ����Ԫ�ؾ����ֵaҲ����97���ɵ�ַ����strlen �Ƿ������ڴ汨�� err  
//	////printf("%d\n", strlen(arr[1]));// �Եڶ���Ԫ�ؾ����ֵbҲ����98���ɵ�ַ����strlen �Ƿ������ڴ汨�� err  
//	//printf("%d\n", strlen(&arr));// 6
//	//printf("%d\n", strlen(&arr + 1));//���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));// 5
//
//
//	//char* p = "abcdef";
//
//	//printf("%d\n", sizeof(p));// 4/8 ����ָ�����p�Ĵ�С 
//	//printf("%d\n",sizeof(p + 1));//4/8 ָ���ֵ��һ��char���ʹ�СҲ����һ���ֽ� �ڶ���Ԫ�ص�ַ��С
//	//printf("%d\n",sizeof(*p));// 1 ��Ԫ��ֵ�Ĵ�С
//	//printf("%d\n", sizeof(p[0]));//1 ��Ԫ��ֵ�Ĵ�С
//	//printf("%d\n", sizeof(&p));// 4/8ָ��ĵ�ַ�Ĵ�С
//	//printf("%d\n", sizeof(&p+1));// 4/8 ָ��ĵ�ַ��һ��ָ�����ʹ�СҲ���� 4/8���ֽ�֮��ĵ�ַ���� ��ַ�Ĵ�С
//	//printf("%d\n", sizeof(&p[0]+1));// 4/8 �ڶ���Ԫ�ص�ַ�Ĵ�С
//
//	//char** pp = &p;
//	//printf("%p   %p   %p\n", p, pp, pp + 1);
//
//	//printf("%d\n", strlen(p));// 6 ͨ��p��ֵ����p�д�ĵ�ַ��ֵ Ҳ���� aԪ�ؿ�ʼstrlen
//	//printf("%d\n", strlen(p + 1));// 5
//	////printf("%d\n", strlen(*p));// err �Ƿ������ڴ��ַ a��ֵ��97 ��һ����ֵ���ǲ��ǵ�ַ
//	////printf("%d\n", strlen(p[0]));// err �Ƿ������ڴ��ַ a��ֵ��97 ��һ����ֵ���ǲ��ǵ�ַ
//	//printf("%d\n", strlen(&p));// ���ֵ ͨ������p�ĵ�ַ�ҵ�p��ֵ Ҳ���ǵ�ֵַ��ʼstrlen
//	// ���p��ֵ��0x0012FF44 ����С��ԭ�� 44FF1200  strlen(&p) == 3
//	//printf("%d\n", strlen(&p + 1));// ���ֵ ���ʵ���p�ĵ�ַ��� 4/8���ֽں�ĵ�ַ��ֵ
//	//printf("%d\n", strlen(&p[0] + 1));// 5
//
//
//
//	//��ά����
////      a	0x004ffb38 {0x004ffb38 {0, 0, 0, 0}, 0x004ffb48 {0, 0, 0, 0}, 0x004ffb58 {0, 0, 0, 0}}	int[3][4]
////  	[0]	0x004ffb38 {0, 0, 0, 0}	int[4]
////  	[1]	0x004ffb48 {0, 0, 0, 0}	int[4]
////  	[2]	0x004ffb58 {0, 0, 0, 0}	int[4]
//
//	//int a[3][4] = { 0 };
//
//	//printf("%d\n", sizeof(a));// 48 ������λ����Ĵ�С 3x4x4=48���ֽڴ�С
//	//printf("%d\n", sizeof(a[0][0]));// 4 һ������Ԫ�ص�ֵ�Ĵ�С  4
//	//printf("%d\n", sizeof(a[0]));// 16   a[0]==*(a+0) ��ά����ĵ�һ��Ԫ�� Ҳ���Ƕ�ά����ĵ�һ�� ��һ��һά���飬
//	//										//a[0]��һά�����������
//	//										//һ������4��Ԫ�ص�һά����Ĵ�С��4x4=16
//	//printf("%d\n", sizeof(a[0]+1));// 4/8  a[0]��ʾ��һ��һά�����������Ҳ��һά�����һ������Ԫ�صĵ�ַ
//	//											//a[0] +1��ʾһά�����еڶ�������Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(*(a[0] + 1)));// 4 ��һ��һά����ĵڶ���Ԫ�صĵ�ַ������ Ҳ����һά����ڶ���Ԫ�ص�ֵ
//	//printf("%d\n", sizeof(a+1));// 4/8  �ڶ�������һά����ĵ�ַ
//	//printf("%d\n", sizeof(*(a+1)));// 16 �ڶ���һά����ĵ�ַ�����þ��ǵڶ��е��������� 
//	//printf("%d\n", sizeof(&a[0]+1));// 4/8 �ڶ�������һά����ĵ�ַ
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 �ڶ���һά����ĵ�ַ�����þ��ǵڶ��е��������� 
//	//printf("%d\n", sizeof(*a));//16 ��1��һά����ĵ�ַ�����þ��ǵ�1�е��������� 
//	//printf("%d\n", sizeof(a[3]));//16 ��4��һά����ĵ�ַ�����þ��ǵ�4�е��������� 
//
//	//printf("%p  %p  %p  %p\n", a, &a[0], a[0], &a[0][0]);
//
//
//
//	//int a[5] = { 1,2,3,4,5 };
//	//int* ptr = (int*)(&a + 1);
//
//	//printf("%d  %d\n",*(a+1),*(ptr-1));// 2   5
//
//
//
//
//}