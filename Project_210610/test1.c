#include<stdio.h>



int Add(int x,int y) {

	return x + y;
}
int Sub(int x, int y) {

	return x - y;
}
int Mul(int x, int y) {

	return x * y;
}
int Div(int x, int y) {

	return x / y;
}
int Xor(int x, int y) {

	return x ^ y;
}

void menu() {
	printf("************************************\n");
	printf("****** 1-Add ********* 2-Sub *******\n");
	printf("****** 3-Mul ********* 4-Div *******\n");
	printf("****** 5-Xor ********* 0-Exit ******\n");
	printf("************************************\n");
}




int main() {

	int input = 0;
	int x = 0;
	int y = 0;

	int (*p)(int,int) = Add;//����ָ�� &Add �� Add������
	int (*p1)(int, int) = &Add;//����ָ�� &Add �� Add������

	int (*pArr[])(int, int) = {0,Add, Sub , Mul, Div , Xor };//����ָ������

	int length = sizeof(pArr) / sizeof(pArr[0]);

	/*printf("len = %d\n",length);
	for (size_t i = 0; i < length; i++)
	{
		printf("%d\n",pArr[i](3,4));
	}*/

	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		if (input > 0 && input < length) {
			printf("����������������:>");
			scanf("%d%d",&x,&y);
			int ret = pArr[input](x, y);
			printf("������:>%d\n",ret);
		}
		else if (input == 0) {
			printf("�˳�\n");
		}
		else {
			printf("ѡ�����\n");
		}
	
	
	} while (input);



	return 0;
}
