#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


/*
* 计算一个数的二进制中1的个数
*/
int countBit(int n) {
	int count = 0;
	while (n) {
	
		n = n & (n - 1);
		count++;
	}
	return count;
}



int main() {

	int input = 0;

	scanf("%d",&input);


	int count = countBit(input);

	printf("%d\n",count);



	return 0;

}