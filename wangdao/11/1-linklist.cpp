#include <cstdio>
#include <cstdlib>

typedef int Elemtype;

typedef struct LNode {
    struct LNode* next;
    Elemtype data;
}LNode, * LinkList;

void list_head_insert(LNode*& L) {
    L = (LinkList)malloc(sizeof(LinkList));
    L->next = NULL;
    Elemtype x;
    scanf("%d", &x);
    LNode* s;
    while (x != 9999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return;
}

void print_list(LinkList L) {
    L = L->next;
    while (L != NULL) {
        printf("%3d->", L->data);
        L = L->next;
    }
    printf("NULL\n");
    return;
}

int main() {
    LinkList L;
    list_head_insert(L);
    print_list(L);
    return 0;
}
