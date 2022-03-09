//#include<stdio.h>
//#include<string.h>
//
//
//int main() {
//
//	////整形数组
//	//int arr[] = {1, 2, 3, 4};
//	//printf("%p   %d\n", arr, sizeof(arr));// 16 整个数组所占字节数
//	//printf("%p   %d\n", arr + 0, sizeof(arr+0));// 4/8 首元素地址所占字节的大小
//	//printf("%p   %d\n", arr + 1,sizeof(arr+1));//  4/8 第二个元素地址所占字节的大小
//	//printf("%p   %d\n", arr[1],sizeof(arr[1]));// 4  第二个元素整形值所占字节的大小
//	//printf("%p   %d\n", &arr,sizeof(&arr));// 4/8 取数组的地址所占字节的大小
//	//printf("%p   %d\n", *&arr, sizeof(*&arr));//  16 整个数组所占字节数
//	//printf("%p   %d\n", &arr + 1,sizeof(&arr+1));// 4/8 跨过一个数组长度之后的地址 ，单纯地址所占字节大小
//	//printf("%p   %d\n", &arr[0],sizeof(&arr[0]));// 4/8 首元素地址所占字节的大小
//	//printf("%p   %d\n", &arr[0] + 1,sizeof(&arr[0]+1));// 4/8 第二个元素地址所占字节的大小
//
//
//	//字符数组
//	//char arr[] = {'a',  'b',   'c',   'd',   'e',   'f', };
//	//printf("%d\n", sizeof(arr));// 6 整个数组所占字节大小
//	//printf("%d\n", sizeof(arr+0));//4/8 首地址所占字节大小
//	//printf("%d\n", sizeof(*arr));// 1 首元素所占字节大小
//	//printf("%d\n", sizeof(arr[1]));// 1首元素所占字节大小
//	//printf("%d\n", sizeof(&arr));// 4/8 数组地址也是地址 一个地址所占字节的大小
//	//printf("%d\n", sizeof(&arr+1));//4/8 跨过一个数组地址也是地址 一个地址所占字节的大小
//	//printf("%d\n", sizeof(&arr[0]+1));// 4/8第二个元素地址所占大小 
//
//	//strlen是计算截至到0为止的字节数
//	//printf("%d\n", strlen(arr));// 随机值
//	//printf("%d\n", strlen(arr + 0));//随机值
//	////printf("%d\n", strlen(*arr));// 对首元素具体的值a也就是97当成地址进行strlen 非法访问内存报错 err  
//	////printf("%d\n", strlen(arr[1]));// 对第二个元素具体的值b也就是98当成地址进行strlen 非法访问内存报错 err  
//	//printf("%d\n", strlen(&arr));// 随机值
//	//printf("%d\n", strlen(&arr + 1));//随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));// 随机值-1
//
//
//	//char arr[] = { "abcdef" };
//	//printf("%d\n", sizeof(arr));// 7 整个数组所占字节大小 最后一个元素\0结尾
//	//printf("%d\n", sizeof(arr+0));//4/8 首地址所占字节大小
//	//printf("%d\n", sizeof(*arr));// 1 首元素所占字节大小
//	//printf("%d\n", sizeof(arr[1]));// 1首元素所占字节大小
//	//printf("%d\n", sizeof(&arr));// 4/8 数组地址也是地址 一个地址所占字节的大小
//	//printf("%d\n", sizeof(&arr+1));//4/8 跨过一个数组地址也是地址 一个地址所占字节的大小
//	//printf("%d\n", sizeof(&arr[0]+1));// 4/8第二个元素地址所占大小 
//
//		//strlen是计算截至到0为止的字节数
//	//printf("%d\n", strlen(arr));// 6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));// 对首元素具体的值a也就是97当成地址进行strlen 非法访问内存报错 err  
//	////printf("%d\n", strlen(arr[1]));// 对第二个元素具体的值b也就是98当成地址进行strlen 非法访问内存报错 err  
//	//printf("%d\n", strlen(&arr));// 6
//	//printf("%d\n", strlen(&arr + 1));//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));// 5
//
//
//	//char* p = "abcdef";
//
//	//printf("%d\n", sizeof(p));// 4/8 计算指针变量p的大小 
//	//printf("%d\n",sizeof(p + 1));//4/8 指针的值加一个char类型大小也就是一个字节 第二个元素地址大小
//	//printf("%d\n",sizeof(*p));// 1 首元素值的大小
//	//printf("%d\n", sizeof(p[0]));//1 首元素值的大小
//	//printf("%d\n", sizeof(&p));// 4/8指针的地址的大小
//	//printf("%d\n", sizeof(&p+1));// 4/8 指针的地址加一个指针类型大小也就是 4/8个字节之后的地址就是 地址的大小
//	//printf("%d\n", sizeof(&p[0]+1));// 4/8 第二个元素地址的大小
//
//	//char** pp = &p;
//	//printf("%p   %p   %p\n", p, pp, pp + 1);
//
//	//printf("%d\n", strlen(p));// 6 通过p的值访问p中存的地址的值 也就是 a元素开始strlen
//	//printf("%d\n", strlen(p + 1));// 5
//	////printf("%d\n", strlen(*p));// err 非法访问内存地址 a的值是97 是一个数值但是不是地址
//	////printf("%d\n", strlen(p[0]));// err 非法访问内存地址 a的值是97 是一个数值但是不是地址
//	//printf("%d\n", strlen(&p));// 随机值 通过访问p的地址找到p的值 也就是地址值开始strlen
//	// 如果p的值是0x0012FF44 根据小端原则 44FF1200  strlen(&p) == 3
//	//printf("%d\n", strlen(&p + 1));// 随机值 访问的是p的地址跨过 4/8个字节后的地址的值
//	//printf("%d\n", strlen(&p[0] + 1));// 5
//
//
//
//	//二维数组
////      a	0x004ffb38 {0x004ffb38 {0, 0, 0, 0}, 0x004ffb48 {0, 0, 0, 0}, 0x004ffb58 {0, 0, 0, 0}}	int[3][4]
////  	[0]	0x004ffb38 {0, 0, 0, 0}	int[4]
////  	[1]	0x004ffb48 {0, 0, 0, 0}	int[4]
////  	[2]	0x004ffb58 {0, 0, 0, 0}	int[4]
//
//	//int a[3][4] = { 0 };
//
//	//printf("%d\n", sizeof(a));// 48 整个二位数组的大小 3x4x4=48个字节大小
//	//printf("%d\n", sizeof(a[0][0]));// 4 一个整形元素的值的大小  4
//	//printf("%d\n", sizeof(a[0]));// 16   a[0]==*(a+0) 二维数组的第一个元素 也就是二维数组的第一行 是一个一维数组，
//	//										//a[0]是一维数组的数组名
//	//										//一个包含4个元素的一维数组的大小是4x4=16
//	//printf("%d\n", sizeof(a[0]+1));// 4/8  a[0]表示第一行一维数组的数组名也是一维数组第一个整形元素的地址
//	//											//a[0] +1表示一维数组中第二个整形元素的地址
//	//printf("%d\n", sizeof(*(a[0] + 1)));// 4 第一行一维数组的第二个元素的地址解引用 也就是一维数组第二个元素的值
//	//printf("%d\n", sizeof(a+1));// 4/8  第二行整个一维数组的地址
//	//printf("%d\n", sizeof(*(a+1)));// 16 第二行一维数组的地址解引用就是第二行的整个数组 
//	//printf("%d\n", sizeof(&a[0]+1));// 4/8 第二行整个一维数组的地址
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 第二行一维数组的地址解引用就是第二行的整个数组 
//	//printf("%d\n", sizeof(*a));//16 第1行一维数组的地址解引用就是第1行的整个数组 
//	//printf("%d\n", sizeof(a[3]));//16 第4行一维数组的地址解引用就是第4行的整个数组 
//
//	//printf("%p  %p  %p  %p\n", a, &a[0], a[0], &a[0][0]);
//
//
//
//	//int a[5] = { 1,2,3,4,5 };
//	//int* ptr = (int*)(&a + 1);
//
//	//printf("%d  %d\n",*(a+1),*(ptr-1));// 2   5
//
//
//
//
//}