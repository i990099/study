//#include <stdio.h>
//#include <stdlib.h>
//#include<assert.h>
//
//
////�����нڵ�Ľṹ
//typedef struct Link {
//    int  elem;
//    struct Link* next;
//}link;
//
////��ʼ������ĺ���
//link* initLink();
//
////�����������ĺ���
//void display(link* p);
//
//int main() {
//    //��ʼ������1��2��3��4��
//    printf("��ʼ������Ϊ��\n");
//    link* p = initLink();
//    display(p);
//    return 0;
//}
//link* initLink() {
//    link* p = NULL;//����ͷָ��
//    link* temp = (link*)malloc(sizeof(link));//������Ԫ�ڵ�
//    //��Ԫ�ڵ��ȳ�ʼ��
//    assert(temp != NULL);
//    temp->elem = 1;
//    temp->next = NULL;
//    p = temp;//ͷָ��ָ����Ԫ�ڵ�
//    for (int i = 2; i < 4; i++) {
//        link* a = (link*)malloc(sizeof(link));
//        assert(a != NULL);
//        a->elem = i;
//        a->next = NULL;
//        temp->next = a;
//        temp = a;//  emp = temp->next �� emp = a ������������
//    }
//    return p;
//}
//void display(link* p) {
//    link* temp = p;//��tempָ������ָ��ͷ���
//    //ֻҪtempָ��ָ��Ľ���next����Null����ִ�������䡣
//    while (temp) {
//        printf("%d ", temp->elem);
//        temp = temp->next;
//    }
//    printf("\n");
//}