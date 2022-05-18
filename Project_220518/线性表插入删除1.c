//#include<stdio.h>
//#include<stdlib.h>
//
//
//
//typedef struct node {
//	int data; //数据域
//	struct node* link;//指针域
//
//}NODE,*LinkList;
//
//
////在p指向的节点后面插入s指向的节点
//void add(LinkList p, LinkList s) {
//	s->link = p->link;
//	p->link = s;
//
//}
//
////删除p所指向的节点
////单链表因为不知道前继节点只知道后继节点
////所以不能直接删除p所指向的节点，需要新定义一个指向p所指节点的后继节点的指针q
////将q所指节点的数据复制到p指针上，然后直接删除q节点即可
//void remove1(LinkList p) {
//	if (p->link != NULL) {
//		p->data = p->link->data;
//		LinkList q = p->link;
//		p->link = q->link;
//		//free(q);
//	}
//	else {
//		//free(p);
//	}
//
//}
//
////打印
//void printData(int len,LinkList p) {
//	LinkList temp = p;
//	for (int i = 0; i < len; i++) {
//		printf("data = %d , link = %p\n", temp->data, temp->link);
//		temp = temp->link;
//	}
//}
//
//int main() {
//
//	NODE node4 = { 4,NULL };
//	NODE node3 = { 3,&node4 };
//	NODE node2 = { 2,&node3 };
//	NODE node1 = { 1,&node2 };
//	LinkList head = &node1;
//	LinkList p = &node1;
//	//LinkList q = &node2;
//
//	//LinkList q = p->link;
//	printf("node1=%p  ,  node2=%p  ,  node3=%p  ,  node4=%p\n", &node1, &node2, &node3, &node4);
//	//printf("p->link=%p\n", p->link);
//	//printf("p=%p  , q=%p\n",p,q);
//	//p->link = &node3;
//	//printf("p->link=%p\n", p->link);
//	//printf("p=%p  , q=%p\n", p, q);
//	//printf("head=%p  ,  node1=%p  ,  node2=%p  ,  node3=%p  ,  node4=%p\n", head, &node1, &node2, &node3, &node4);
//
//	printData(4,p);
//	p = &node2;
//	NODE node5 = { 3,NULL };
//	LinkList s = &node5;
//	add(p,s);
//	printf("node1=%p  ,  node2=%p  ,  node3=%p  ,  node4=%p  ,  node5=%p\n", &node1, &node2, &node3, &node4, &node5);
//	printData(5, head);
// printf("--------------------------\n");
//	remove1(p);
//	printData(4, head);
//	return 0;
//
//}