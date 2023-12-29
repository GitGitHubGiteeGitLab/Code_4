#include<cstdio>

typedef int Elemtype;
#define MaxSize 5
typedef struct {
    Elemtype data[MaxSize];
    int front, rear;
}SqQueue;

void InitQueue(SqQueue& Q) {
    Q.rear = Q.front = 0;
    return;
}

bool isEmpty(SqQueue Q) {
    return Q.front == Q.rear;
}

bool EnQueue(SqQueue& Q, Elemtype x) {
    if ((Q.rear + 1) % MaxSize == Q.front)return false;
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % MaxSize;
    return true;
}

bool DeQueue(SqQueue& Q, Elemtype& x) {
    if (isEmpty(Q))return false;
    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % MaxSize;
    return true;
}

void print_Queue(SqQueue Q) {
    if (isEmpty(Q))return;
    for (int i = Q.front; i != Q.rear; i = (i + 1) % MaxSize) {
        printf("%3d", Q.data[i]);
    }
    printf("\n");
    return;
}

int main() {
    SqQueue Q;
    InitQueue(Q);
    bool ret;
    ret = isEmpty(Q);
    if (ret) printf("empty\n");
    else printf("not empty\n");
    EnQueue(Q, 3);
    EnQueue(Q, 4);
    EnQueue(Q, 5);
    EnQueue(Q, 6);
    ret = EnQueue(Q, 7);
    if (ret) printf("EnQueue success\n");
    else printf("EnQueue failed\n");
    print_Queue(Q);
    Elemtype element;
    ret = DeQueue(Q, element);
    if (ret)printf("DeQueue success : %d\n", element);
    else printf("DeQueue failed\n");
    print_Queue(Q);
    ret = EnQueue(Q, 8);
    if (ret) printf("EnQueue success\n");
    else printf("EnQueue failed\n");
    print_Queue(Q);
    return 0;
}
