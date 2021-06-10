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

	int (*p)(int,int) = Add;//函数指针 &Add 和 Add都可以
	int (*p1)(int, int) = &Add;//函数指针 &Add 和 Add都可以

	int (*pArr[])(int, int) = {0,Add, Sub , Mul, Div , Xor };//函数指针数组

	int length = sizeof(pArr) / sizeof(pArr[0]);

	/*printf("len = %d\n",length);
	for (size_t i = 0; i < length; i++)
	{
		printf("%d\n",pArr[i](3,4));
	}*/

	do {
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		if (input > 0 && input < length) {
			printf("请输入两个操作数:>");
			scanf("%d%d",&x,&y);
			int ret = pArr[input](x, y);
			printf("输出结果:>%d\n",ret);
		}
		else if (input == 0) {
			printf("退出\n");
		}
		else {
			printf("选择错误\n");
		}
	
	
	} while (input);



	return 0;
}
