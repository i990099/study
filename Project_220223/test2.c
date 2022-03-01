#include<stdio.h>



int main() {

	// char* p1    字符指针
	// int* p2       整形指针
	// float* p3    浮点型指针

	// int* arr[10] 指针数组 有10个元素，每个元素是指向整形的指针
	// int (*parr)[10] 数组指针 ，该指针指向的是一个数组， 该数组有10个整形元素
    // int (*parr[5])[10] 指针数组，该数组有5个元素，每个元素是指向 有10个整形元素的数组 的指针

	// int* Add (int ,int ) 指针函数 ，是一个返回值为整形指针的函数
	// int (*Add)(int ,int) 函数指针，是一个指向Add函数的指针
    // int (*Add[2])(int,int) 函数指针数组，该数组有两个元素，每个元素都是指向一个函数的指针

	//int a = 3;
	//int b = 5;
	//int c = 4;

	//int* arr[3] = {&a,&b,&c};
	//// 只有sizeof(arr) 和 &arr 里面的数组名表示的整个数组的地址，其他任何情况都表示的是 首元素的地址
	//printf("%d   %d  \n", sizeof(arr), sizeof(&arr));
	//printf("%p  %p   %p    %p   %p\n", arr, &arr, &arr[0], arr[0],*arr);
	//printf("%d   %d  \n", *arr[0], **arr);

	//int* (*parr)[3] = &arr;

	//printf("%p  %p   %p    %p  %p\n", parr, &parr, parr[0], *parr,**parr);


	//char* c[] = {"ENTER","NEW","POINT","FIRST"};


	int no = 4;

	switch (no)
	{
	case 1:
		printf(" no is 1\n");
		break;
	case 3:
		printf(" no is 3\n");
		break;
	case 4:
		printf(" no is 4\n");
		break;

	case 6:
		printf(" no is 5\n");
		break;
	case 7:
		printf(" no is 5\n");
		break;
	case 8:
		printf(" no is 5\n");
		break;
	default:
		break;
	}

	int age = 8;





	return 0;


}