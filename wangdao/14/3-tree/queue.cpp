/*************************************************************************
	> File Name: queue.c
	> Author: 
	> Mail: 
	> Created Time: Fri 03 Nov 2023 03:47:23 PM CST
 ************************************************************************/

#include "function.h"

void InitQueue(LinkQueue& Q) {
    Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
    Q.front->next = NULL;
    return;
}

void EnQueue(LinkQueue& Q, Elemtype x) {
    LinkNode* p = (LinkNode*)malloc(sizeof(LinkNode));
    p->data = x;
    p->next = NULL;
    Q.rear->next = p;
    Q.rear = p;
    return;
}


bool isEmpty(LinkQueue Q) {
    return Q.front == Q.rear;
}

bool DeQueue(LinkQueue& Q, Elemtype& x) {
    if (isEmpty(Q))return false;
    LinkNode* p = Q.front->next;
    if (p == Q.rear)Q.rear = Q.front;
    x = p->data;
    Q.front->next = p->next;
    free(p);
    return true;
}
