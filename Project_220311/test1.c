#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<assert.h>


typedef struct node* PNode; /*定义队列的每个节点的类型*/

typedef struct node {
    int data;//每个节点中存放的数据
    PNode next;//下一节点
}Node;

typedef struct queue {
    PNode head;//队头
    PNode tail;//队尾
    int Length;//队列长度
}Queue;

Queue* CreateNewQueue() { // 返回创建的新空队列
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    assert(queue != NULL);
    queue->head = (Node*)malloc(sizeof(Node));
    assert(queue->head != NULL);
    queue->head->next = NULL;
    queue->tail = queue->head;
    queue->Length = 0;
    return queue;
}

void JoinQueue(Queue* queue, int x) { // 入队
    PNode newnode = (Node*)malloc(sizeof(Node));
    assert(newnode != NULL);
    newnode->data = x;
    ++queue->Length;//每加入一个节点长度自动加1，因为->的优先级高于++ 所以执行顺序相当于  ++(queue->Length)
    newnode->next = NULL;
    queue->tail->next = newnode; 
    queue->tail = newnode;
}

int notEmpty(Queue* queue) {
    //printf("%d\n", queue->Length);
    return (queue->Length > 0);
}

int OutQueue(Queue* queue, int* x) { // 出队
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

int GetLength(Queue* queue) { // 获取队列长度
    return queue->Length;
}

int GetFirst(Queue* queue) { // 获取队头数据
    return queue->head->next->data;
}

int GetLast(Queue* queue) { // 获取队尾数据
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
    //销毁
    DestroyQueue(queue);
    return 0;
}