#include<stdio.h>


int main() {

	int a[10] = { 0 };

	int* p = &a[10];

	printf("p = %p  &a=%p  &a[9] = %p\n",p,&a, &a[9]);


	return 0;
}

