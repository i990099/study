//#include<stdio.h>
//
//int my_strlen(char* str) {
//
//	int count = 0;
//	char* pc = str;
//	while (*str++ != 0) {
//		
//		count++;
//	
//	}
//	printf("%d\n", str - pc-1);
//	return count;
//
//}
//
//int sum(int a,int b) {
//
//	return a + b;
//}
//
//int main() {
//
//	char* str = "abcdef";
//
//	int strlen = my_strlen(str);
//
//	printf("%d \n",strlen);
//
//	int (*ps)(int, int) = sum;
//
//	int sums = ps(3, 5);
//	
//	printf("%d\n",sums);
//
//	 
//	//����1   ����һ�������ĵ���
//	//(*(void(*)())0)();   //��0��Ϊ��ַǿ������ת���� void(*)() ����ָ�����ͣ�0 �ͱ������������ĵ�ַȻ��
//	                              //����0��ַ���ú���
//
//	//����2  ����һ����������
//	//void(*signal(int, void(*)(int)))(int)  // signal��������������һ��ָ�룬ָ��ָ����� void (int) �������
//															 //signal(int, void(*)(int)) �������������� һ��int����һ���Ǻ���ָ��void(*)(int)
//	//�ֲ�� void(*          )(int)   �� signal(int, void(*)(int)) ���ѷ�����signal������ķ�������ʣ�µľ��Ƿ���ֵ
//	typedef void(*pfun_t)(int) ;
//	//�ĳ�  pfun_t  signal(int ,pfun_t) 
//	
//
//	
//	
//	
//	
//	return 0;
//
//}