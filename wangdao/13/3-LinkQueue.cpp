#include <cstdio>
#include <cstdlib>

typedef int Elemtype;

typedef struct LinkNode {
    struct LinkNode* next;
    Elemtype data;
}LinkNode;

typedef struct {
    LinkNode* front, * rear;
}LinkQueue;

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

void print_Queue(LinkQueue Q) {
    if (Q.front->next == NULL)printf("NULL");
    for (LinkNode* q = Q.front->next; q; q = q->next) {
        printf("%3d", q->data);
    }
    printf("\n");
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

int main() {
    LinkQueue Q;
    InitQueue(Q);
    EnQueue(Q, 3);
    EnQueue(Q, 4);
    EnQueue(Q, 5);
    EnQueue(Q, 6);
    EnQueue(Q, 7);
    print_Queue(Q);
    bool ret;
    Elemtype element;
    ret = DeQueue(Q, element);
    if (ret)printf("DeQueue : %d\n", element);
    print_Queue(Q);

    ret = DeQueue(Q, element);
    if (ret)printf("DeQueue : %d\n", element);
    print_Queue(Q);

    ret = DeQueue(Q, element);
    if (ret)printf("DeQueue : %d\n", element);
    print_Queue(Q);

    ret = DeQueue(Q, element);
    if (ret)printf("DeQueue : %d\n", element);
    print_Queue(Q);

    ret = DeQueue(Q, element);
    if (ret)printf("DeQueue : %d\n", element);
    print_Queue(Q);

    return 0;
}