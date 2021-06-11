#include<stdio.h>
#include<string.h>


int main() {

	//char* p = "abcdef";
	////printf("%s\n",p);//从第一个元素开始打印直到\0结束
	////printf("%c\n", *p); //打印第一个元素
	////printf("%c\n", p[0]);//打印第一个元素
	////printf("%c\n", (*p)+1);//解引用得到第一个元素的值，然后数值加1 表示第一个元素的值由97变成98
	////printf("%s\n", p + 1);//从第二个元素开始打印
	////sizeof 表示所传类型占内存中的字节数
	//printf("%d\n",sizeof(p));//p表示指针类型 4或8个字节
	//printf("%d\n", sizeof(p+1));//p表示指针类型 p+1是指执行的下一个的地址 依然是指针类型 4 或8个字节
	//printf("%d\n", sizeof(*p));// *p得到的是第一个元素的值char类型  1个字节
	//printf("%d\n", sizeof(p[0]));//第一个元素 char类型 1个字节
	//printf("%d\n", sizeof(&p));//地址 4或8个字节
	//printf("%d\n", sizeof(&p+1));//地址 4或8个字节
	//printf("%d\n", sizeof(&p[0]+1));//地址 4或8个字节


	//char arr[] = {'a',	'b',	'c',	'd',	'e',	'f'};
	//printf("%d\n",strlen(arr));//要遍历到\0才能停止所以长度是随机值
	//printf("%d\n", strlen(arr+0));//要遍历到\0才能停止所以长度是随机值
	////printf("%d\n", strlen(*arr));//*arr表示的是一个具体的char类型的数值  而strlen的参数是const char*  所以会报错
	////printf("%d\n", strlen(arr[1]));//arr[1]表示的是一个具体的char类型的数值 而strlen的参数是const char*  所以会报错
	//printf("%d\n", strlen(&arr));//&arr 表示首元素地址  随机值
	//printf("%d\n", strlen(&arr+1));//指向一个数组长度（目前是6个字节）之后的地址。随机值 和strlen(&arr)差了数字6          随机值-6
	//printf("%d\n", strlen(&arr[0]+1));//随机值 和strlen(&arr)差了数字1      随机值-1
	int a[] = {1,2};
	int b[] = { 3,4 };
	int c[] = { 5,6 };
	int(*p1[3])[2] = { &a, &b, &c };//数组指针的数组   指向数组的指针叫数组指针

	int* p[3] = { &a, &b, &c };

	//int parr[3][2] = { {1,2}, { 3,4 },  { 5,6 } };
	//int(*(*parr)[3])[2];

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 2; j++) {

			//printf("%d ", (*p[i]) + j);//int* p[3]
			printf("%d ", (*p1[i])[j]);//int(*p[3])[2]   //p1[i] 数字第i个元素 表示指针；*p1[i] 因为指针指向数组，解引用表示拿到了数组
			 //printf("%d ",*((*p1[i]) + j));//int(*p[3])[2] //(*p1[i]) 解引用表示拿到了指针指向的数组 , 数组arr[0] == *(arr +0)
			//printf("%d ", p[i][j]);//int* p[3]
			//printf("%p ", p[i][j]);
		}
		printf("\n");
	}


}
