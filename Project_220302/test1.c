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
//	//代码1   属于一个函数的调用
//	//(*(void(*)())0)();   //把0作为地址强制类型转换成 void(*)() 函数指针类型，0 就变成了这个函数的地址然后
//	                              //调用0地址处该函数
//
//	//代码2  属于一个函数声明
//	//void(*signal(int, void(*)(int)))(int)  // signal函数返回类型是一个指针，指针指向的是 void (int) 这个函数
//															 //signal(int, void(*)(int)) 函数有两个参数 一个int类型一个是函数指针void(*)(int)
//	//分拆成 void(*          )(int)   和 signal(int, void(*)(int)) ，把方法名signal及后面的方法拿走剩下的就是返回值
//	typedef void(*pfun_t)(int) ;
//	//改成  pfun_t  signal(int ,pfun_t) 
//	
//
//	
//	
//	
//	
//	return 0;
//
//}