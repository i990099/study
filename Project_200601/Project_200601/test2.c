#include<stdio.h>


int main() {

	int a[] = {1,6,3,5,4};
	int x = 0;
	int y = 0;
	int* p = &a;
	int* q = &a;

	printf("����ǰ��\np=%p\nq=%p\n", p, q);

	//x = *p++;//��ͬ��*(p++)
	//x = *++p;//��ͬ��*(++p)
	x = ++ *p;//��ͬ��++ (*p)

	y = (*q)++;

	printf("�����\np=%p\nq=%p\n",p,q);
	printf("x=%d\ny=%d\n*p=%d\n*q=%d\n",x,y,*p,*q);




	return 0;

}