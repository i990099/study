#include<stdio.h>


int main() {
	int a = 9;
	int* p = &a;
	float* pf = (float*)p;

	printf("p=%p\n*p=%d\npf=%p\n*pf=%f\na=%d\n", p, *p, pf, *pf,a);
	*pf = 9.0;

	printf("p=%p\n*p=%d\npf=%p\n*pf=%f\na=%d\n",p,*p,pf,*pf,a);
	printf("----------------------------------------------------------------------");
	/*int n = 9;
	int* pint = &n;
	float* pfloat = (float*)pint;
	printf("n=%d\n",n);
	printf("*pf=%f\n",*pfloat);

	*pfloat = 9.0;
	printf("n=%d\n", n);
	printf("*pf=%f\n", *pfloat);*/



	return 0;

}