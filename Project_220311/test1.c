#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<assert.h>


typedef struct node* PNode; /*������е�ÿ���ڵ������*/

typedef struct node {
    int data;//ÿ���ڵ��д�ŵ�����
    PNode next;//��һ�ڵ�
}Node;

typedef struct queue {
    PNode head;//��ͷ
    PNode tail;//��β
    int Length;//���г���
}Queue;

Queue* CreateNewQueue() { // ���ش������¿ն���
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    assert(queue != NULL);
    queue->head = (Node*)malloc(sizeof(Node));
    assert(queue->head != NULL);
    queue->head->next = NULL;
    queue->tail = queue->head;
    queue->Length = 0;
    return queue;
}

void JoinQueue(Queue* queue, int x) { // ���
    PNode newnode = (Node*)malloc(sizeof(Node));
    assert(newnode != NULL);
    newnode->data = x;
    ++queue->Length;//ÿ����һ���ڵ㳤���Զ���1����Ϊ->�����ȼ�����++ ����ִ��˳���൱��  ++(queue->Length)
    newnode->next = NULL;
    queue->tail->next = newnode; 
    queue->tail = newnode;
}

int notEmpty(Queue* queue) {
    //printf("%d\n", queue->Length);
    return (queue->Length > 0);
}

int OutQueue(Queue* queue, int* x) { // ����
    PNode p;
    if (notEmpty(queue)) {
        p = queue->head->next;
        *x = p->data;
        queue->head->next = p->next;
        --queue->Length;
        free(p);
        return 1;
    }
    return 0;
}

int GetLength(Queue* queue) { // ��ȡ���г���
    return queue->Length;
}

int GetFirst(Queue* queue) { // ��ȡ��ͷ����
    return queue->head->next->data;
}

int GetLast(Queue* queue) { // ��ȡ��β����
    return queue->tail->data;
}

void ClearQueue(Queue* queue) {
    queue->tail = queue->head;
    queue->Length = 0;
}

void DestroyQueue(Queue* queue) {
    PNode q, p = queue->head;
    while (p) {
        q = p;
        p = q->next;
        free(q);
    }
    queue->head = queue->tail = NULL;
    free(queue);
    queue = NULL;
}

int main() {
    int i, n = 10, x;
    Queue* queue = CreateNewQueue();
    //srand(time(0));
    for (i = 0; i < n; ++i) {
        //x = rand() % 100;
        printf("%d ", i);
        JoinQueue(queue, i);
    }
    printf("\n");
    while (notEmpty(queue)) {
        OutQueue(queue, &x);
        printf("%d ", x);
    }
    printf("\n");
    //����
    DestroyQueue(queue);
    return 0;
}