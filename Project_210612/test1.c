//#include<stdio.h>
//
////int main() {
////
////	//int a[4] = {1 ,2 , 3 , 4 };
////
////	//int* par1 = (int* )(&a + 1);
////
////	//int* par2 = (int*)((int)a+1);
////
////	//int** par3 = &par2;
////
////	//printf("%x %x\n", par1[-4], *par2);
////
////	//printf("%x %x\n",par1[-1],*par2);
////
////
////
////	//int a[3][2] = {(1,2),(3,4),(5,6)};//相当于 {{2,4},{5,0},{0,0}}
////
////	//int* p = a[0];
////
////	//printf("%d\n",p[0]);//p[0]相当于 *(p+0)
////
////
////	//int a[5][5];//五行五列的二位数组
////	//int b[4] = {1,2,3,4};
////
////	//printf("%d\n", &b[1]-&b[0]);//地址相减得到的是元素个数的差值 而不是地址值数值作差
////	//printf("%d\n", (int)(&b[1]) - (int)(&b[0]));
////	
////	//int (*p)[4] = b;//数组指针  指向有四个整形元素的数组
////	//
////	//printf("b=%p\np=%p\n*p=%p\n",b,p+1,*p+1);
////
////	//int length = sizeof(b) / sizeof(b[0]);
////	//
////	//for (size_t i = 0; i < length; i++)
////	//{
////	//	//printf("%d\n",*(*p+i));
////	//	printf("%d\n", (*p)[i]);//*p 相当于拿到 b
////	//}
////
////	//int(*pp)[4];
////	//pp = a;
////	//int bb = (int)(&pp[4][2]) - (int)(&a[4][2]);// -16
////	//int bc = &pp[4][2] - &a[4][2];// -4 两个地址相减得到的是元素的个数
////	//printf("%p  %p  %d  %d\n", &pp[4][2], &a[4][2],bb,bc);
////	//printf("%p  %d\n",&pp[4][2]-&a[4][2], &pp[4][2] - &a[4][2]);
////
////	return 0;
////
////}
//
//
////int main() {
////
////	int a[2][5] = {1,2,3,4,5,6,7,8,9,10};
////
////	int* ptr1 = (int *)(&a+1);
////
////	int* ptr2 = (int *)(*(a+1));
////
////	int aa[4] = { 1 ,2 , 3 , 4 };
////
////	printf("%p  %d\n", aa + 1, *(aa + 1));
////
////	printf("%p %p %p %d\n",a+1,*(a+1),a[1],**(a + 1));//二维数组相当于 二级指针 a+0 和 *(a+0) 和a[0] 都是拿到的是第二行的首元素地址
////	
////	printf("%d\n%d\n",*(ptr1-1),*(ptr2-1));
////
////
////
////	return 0;
////
////}
//
//
////int main() {
////
////	char* a[] = {"work","at","alibaba"};//其实是char类型的二维数组 有三个char* 类型的元素
////
////	char** pa = a;
////	pa++;
////
////	printf("%s\n",*pa);
////
////	return 0;
////
////}
//
//
////int main() {
////
////	char* c[] = { "ENTER","NEW","POINT","FIRST" };
////
////	char** cp[] = { c + 3,c + 2,c + 1,c };//{"FIRST","POINT","NEW","ENTER"}
////
////	int length = sizeof(cp) / sizeof(cp[0]);
////	printf("%c\n",**c);
////	printf("%d  %d  %d\n",length, sizeof(cp), sizeof(cp[0]));
////
////	for (size_t i = 0; i < length; i++)
////	{
////		//printf("%s\n",*cp[i]);
////		printf("%s\n", *(c+i));
////	}
////
////	return 0;
////}
//
//int main() {
//
//	char* c[] = {"ENTER","NEW","POINT","FIRST"};
//
//	char** cp[] = {c+3,c+2,c+1,c};//{"FIRST","POINT","NEW","ENTER"}
//
//
//	char*** cpp =cp;//char** cp[] 相当于三维数组 也就相当于三级指针
//	//cpp存的是cp的地址，cp里面存的是c的地址。c里面存的是 三个元素中各个的首地址
//
//	printf("cpp=%p\n*cpp=%p\n**cpp=%p",cpp,*cpp,**cpp);
//
//	printf("%s\n",**++cpp);//POINT cpp存的既是cp的地址 也是cp里面首元素的地址（cp[0]的地址），cpp+1表示指针移动一个元素 
//	//指向cp里面的第二个元素, *++cpp == *(cpp+1) 表示拿到cp的中第二个元素cp[1] 即存的（c+2）的地址 同时也是 c数组首元素地址+2之后
//	// 所指向的那个元素的地址即 c[2] 的地址，
//	//**(cpp+1)拿出cp里面第二个元素（c+2）的地址所指向（存储）c[2]的首元素地址 即是char*  POINT
//	printf("%s\n", *--*++cpp+3);//继续++cpp表示指向的是cp中的第三个元素，*++cpp表示拿到了第三个元素存的（c+1）的地址 
//	//也是c数组地址（即首元素地址）+1之后即 c[1]对应的首元素地址
//	//--*++cpp表示将（c+1）的地址减去一个元素长度地址后 就是c的地址即c[0]地址，*--*++cpp找到地址的值即ENTER 中首元素E的地址 
//	//*--*++cpp+3 表示首元素E的地址向后数三个地址开始打印即ER
//	printf("%s\n", *cpp[-2]+1);//此时的cpp指向的是cp中的第三个元素，cpp[-2]== *(cpp-2)表示的是指向的第一个元素的地址
//	//*cpp[-2]== **(cpp-2) 拿到第一个元素FIRST 中F的首地址*cpp[-2]+1向后挪动一个地址，打印出来的是IRST
//	printf("%s\n", cpp[-1][-1]+1);//cpp[-1] ==  *(cpp-1)  由cp[2]地址减去一个元素长度的地址 后变成cp[1]的地址, 
//	//解引用后是cp[1]的值即 c+2的地址,  cpp[-1][-1] == *(*(cpp-1)-1)  c+2 的地址也是数组c[2]的地址， 地址减1再解引用即 c[2]的值
//	// 	   c[2]的值即 c[2]所指向的元素NEW 首元素N的地址
//	// 	   cpp[-1][-1]+1 ==  *(*(cpp-1)-1)  E的地址 再加1 表示从EW打印
//
//
//
//	return 0;
//}