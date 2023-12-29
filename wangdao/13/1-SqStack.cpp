#include <cstdio>
#define MaxSize 50
typedef int Elemtype;

typedef struct {
    int top;
    Elemtype data[MaxSize];
}SqStack;

void InitStack(SqStack& S) {
    S.top = -1;
    return;
}

bool StackEmpty(SqStack S) {
    return S.top == -1;
}

bool Push(SqStack& S, Elemtype x) {
    if (S.top == MaxSize - 1)return false;
    S.data[++S.top] = x;
    return true;
}

bool GetTop(SqStack S, Elemtype& m) {
    if (StackEmpty(S))return false;
    m = S.data[S.top];
    return true;
}

bool Pop(SqStack& S, Elemtype& m) {
    if (StackEmpty(S))return false;
    m = S.data[S.top--];
    return true;
}

int main() {
    SqStack S;
    InitStack(S);
    bool flag = StackEmpty(S);
    if (flag)printf("stack is empty.\n");
    Push(S, 3);
    Push(S, 4);
    Push(S, 5);
    Elemtype m;
    flag = GetTop(S, m);
    if (flag)printf("get top: %d\n", m);
    flag = Pop(S, m);
    if (flag)printf("pop element: %d\n", m);
    flag = Pop(S, m);
    if (flag)printf("pop element: %d\n", m);
    flag = Pop(S, m);
    if (flag)printf("pop element: %d\n", m);
    flag = Pop(S, m);

    if (flag)printf("pop element: %d\n", m);
    else printf("stack is empty, can't pop.\n");
    return 0;
}
