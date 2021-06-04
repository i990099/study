#include<stdio.h>


int main() {

	int a[] = {1,6,3,5,4};
	int x = 0;
	int y = 0;
	int* p = &a;
	int* q = &a;

	printf("计算前：\np=%p\nq=%p\n", p, q);

	//x = *p++;//等同于*(p++)
	//x = *++p;//等同于*(++p)
	x = ++ *p;//等同于++ (*p)

	y = (*q)++;

	printf("计算后：\np=%p\nq=%p\n",p,q);
	printf("x=%d\ny=%d\n*p=%d\n*q=%d\n",x,y,*p,*q);




	return 0;

}