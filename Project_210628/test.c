//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <assert.h>
//
//
///**
// * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
// *��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20����
// ���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��
// *
// * @param s string�ַ���
// * @return string�ַ���
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
// //�궨��
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