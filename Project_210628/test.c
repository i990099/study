//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <assert.h>
//
//
///**
// * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
// *请实现一个函数，将一个字符串中的每个空格替换成“%20”。
// 例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
// *
// * @param s string字符串
// * @return string字符串
// */
// char* replaceSpace(char* s) {
//     // write code here
// 
//     assert(s != NULL);
//     int len = strlen(s);
//     int count = 0;
//     for (int i = 0;i < len;i++) {
//         if (*(s + i) == ' ') 
//             count++;
//     }
//     int sz = len + count * 2;
//     char* q = (char*)malloc(sz * sizeof(char));
//
//     if (q == NULL) {
//         return s;
//     }
//
//     int j = 0;
//     for (int i = 0;i < len;i++) {
//         if (j < sz) {
//             if (*(s + i) == ' ') {
//                 q[j++] = '%';
//                 q[j++] = '2';
//                 q[j++] = '0';
//             }
//             else {
//
//                 q[j++] = *(s + i);
//
//             }
//         }
//         
//     }
//
// 
//     return q;
// 
// }
//
// //宏定义
//#define Sum(X,Y) ((X)+(Y))
//
//#define SIZEOF(type) sizeof(type)
// 
//#define MALLOC(num,type) malloc(num*sizeof(type))
//
//int main() {
//
//    char arr[] = "ha pp y";
//    char* p = arr;
//    char* s = replaceSpace(arr);
//
//    printf("%s\n", arr);
//   
//    printf("%s\n", s);
//
//    printf("%d\n", Sum(3, 4));
//
//    printf("%d\n", SIZEOF(int));
//    printf("%d\n", SIZEOF(char));
//    printf("%d\n", SIZEOF(float));
//
//    return 0;
//}