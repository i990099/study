#include<stdio.h>

//int main() {
//
//	int a = 5;
//
//	int* p = &a;
//
//	int b = (*p)++; //等价于b = a++; 即b = a; a = a + 1;  
//
//	int c = ++(*p); //等价于c = ++a; 即a = a + 1; c = a;   
//
//	printf("b = %d, c = %d\n", b, c);
//
//	printf("(*p)++ = %d, ++(*p) = %d\n", (*p)++, ++(*p));//不同编译器打印出来的结果不一样有的是 8    9 有的是8     8 
//
//	printf("*p=%d a=%d\n", *p, a);
//
//	return 0;
//
//}


int Add(int x,int y) {
	
	return x + y;
}



int main() {

	//int a = 65;
	//int* p = &a;
	///*char* b = (char*)p;
	//printf("%p %c\n",b,*b);*/
 //   
	////(*(void (*)())0)()   //一次函数调用, 先将一个函数的首地址0强制转换为函数指针void(*)() ，然后调用0地址处的函数
	//char b = *(char*)p;//p先和优先级高的结合，因为（）优先级大于* 所以相当于 *( (char*)p )
	////printf("%c\n", b);
	////&函数名  和 函数名  都表示函数的地址
	//printf("%p\n",&Add);
	//printf("%p\n", Add);

	//int (*pa)(int, int) = Add;

	//printf("%p\n", pa);
	//printf("%p\n", *pa);

	//int result = pa(3,2);

	//int result1 = (*pa)(3, 2);
	//printf("%d  %d\n", result, result1);

	int a[2] = { 1,2 };
	int b[2] = { 3,4 };
	int (*p)[2] = a;

	printf("%p %p %p %p\n", p, *p, a, &a);

	printf("%p  %p  %d %d %d\n", p[0], p[1], (*p)[1], a[0], a[1]);
	printf("%d  %d  %d %d %d\n", p[0][0], p[0][1], (*p)[1], a[0], a[1]);


	/*int* p[2] = { a,b };

	printf("%p %p %p %p\n", p, *p, a, &a);
	printf("%p %d %d\n", p[0], *p[0], *p[1]);
	printf("%d %d %d %d\n", *p[0], *(p[0] + 1), *p[1], *(p[1] + 1));*/

	return 0;
}