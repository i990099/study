#include<stdio.h>



int main() {

	// char* p1    �ַ�ָ��
	// int* p2       ����ָ��
	// float* p3    ������ָ��

	// int* arr[10] ָ������ ��10��Ԫ�أ�ÿ��Ԫ����ָ�����ε�ָ��
	// int (*parr)[10] ����ָ�� ����ָ��ָ�����һ�����飬 ��������10������Ԫ��
    // int (*parr[5])[10] ָ�����飬��������5��Ԫ�أ�ÿ��Ԫ����ָ�� ��10������Ԫ�ص����� ��ָ��

	// int* Add (int ,int ) ָ�뺯�� ����һ������ֵΪ����ָ��ĺ���
	// int (*Add)(int ,int) ����ָ�룬��һ��ָ��Add������ָ��
    // int (*Add[2])(int,int) ����ָ�����飬������������Ԫ�أ�ÿ��Ԫ�ض���ָ��һ��������ָ��

	//int a = 3;
	//int b = 5;
	//int c = 4;

	//int* arr[3] = {&a,&b,&c};
	//// ֻ��sizeof(arr) �� &arr �������������ʾ����������ĵ�ַ�������κ��������ʾ���� ��Ԫ�صĵ�ַ
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