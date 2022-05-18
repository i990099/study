#include<stdio.h>
#include<stdlib.h>



typedef struct node {
	struct node* front;//ָ���� ǰ�̽ڵ�
	int data; //������
	struct node* next;//ָ���� ��̽ڵ�

}NODE, * LinkList;


//��pָ��Ľڵ�������sָ��Ľڵ�
void add(LinkList p, LinkList s) {
	s->front = p;
	s->next = p->next;
	p->next->front = s;
	p->next = s;

}

//ɾ��p��ָ��Ľڵ�

void remove1(LinkList p) {
	if (p->front == NULL) {//ͷ���
		if (p->next != NULL) {
			p->next->front = NULL;
		}
		return;
	}

	if (p->next == NULL) {//β�ڵ�
		if (p->front != NULL) {
			p->front->next = NULL;
		}
		return;
	}

	p->front->next = p->next;
	p->next->front = p->front;

	//free(p);
	

}

//��ӡ
void printData(int len, LinkList p) {
	LinkList temp = p;
	for (int i = 0; i < len; i++) {
		printf("front = %p , data = %d , next = %p\n", temp->front,temp->data, temp->next);
		temp = temp->next;
	}
}

int main() {

	NODE node1 = { NULL,1,NULL };
	NODE node2 = { NULL, 2,NULL };
	NODE node3 = { NULL,3,NULL };
	NODE node4 = { NULL, 4,NULL };
	node1.next = &node2;
	node2.front = &node1;
	node2.next = &node3;
	node3.front = &node2;
	node3.next = &node4;
	node4.front = &node3;
	LinkList head = &node1;
	LinkList p = &node1;
	////LinkList q = &node2;

	//LinkList q = p->link;
	printf("node1=%p  ,  node2=%p  ,  node3=%p  ,  node4=%p\n", &node1, &node2, &node3, &node4);
	//printf("p->link=%p\n", p->link);
	//printf("p=%p  , q=%p\n",p,q);
	//p->link = &node3;
	//printf("p->link=%p\n", p->link);
	//printf("p=%p  , q=%p\n", p, q);
	//printf("head=%p  ,  node1=%p  ,  node2=%p  ,  node3=%p  ,  node4=%p\n", head, &node1, &node2, &node3, &node4);

	printData(4, p);
	p = &node2;
	NODE node5 = { NULL,13,NULL };
	LinkList s = &node5;
	add(p, s);
	printf("node1=%p  ,  node2=%p  ,  node3=%p  ,  node4=%p  ,  node5=%p\n", &node1, &node2, &node3, &node4, &node5);
	printData(5, head);
	printf("--------------------------\n");
	remove1(s);
	printData(4, head);
	return 0;

}