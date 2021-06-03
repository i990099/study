#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH 0
#define _CRT_SECURE_NO_DEPRECATE

#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1


#include <stdio.h>

int max(int x,int y) {

	return x > y ? x : y;
}

int max(int,int);

int main() {

	//int (*fun)(int, int) = max;
	//int a = 0, b = 0, c = 0, d =0;
	//printf("%p %p %p %p\n",fun, *fun, max,&max);
	//scanf("%d %d %d", & a, &b, &c);
	//d = fun(fun(a,b),c);
	//int e = max(max(a,b),c);
	//printf("%d %d\n",d,e);

	int a[2] = {1,2};
	int b[2] = { 3,4 };
	/*int (*p)[2] = a;

	printf("%p %p %p %p\n", p, *p, a, &a);

	printf("%d %d %d %d\n", p[0], (*p)[1], a[0], a[1]);*/

	int *p[2] = {a,b};

	printf("%p %p %p %p\n", p, *p, a, &a);
	printf("%p %d %d\n", p[0], *p[0], *p[1]);
	printf("%d %d %d %d\n", *p[0], *(p[0] + 1), *p[1], *(p[1] + 1));

	return 0;

}