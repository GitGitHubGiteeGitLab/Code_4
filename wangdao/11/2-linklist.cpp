#include <cstdio>
#include <cstdlib>

typedef int Elemtype;

typedef struct LNode {
    struct LNode* next;
    Elemtype data;
}LNode, * LinkList;

void list_tail_insert(LNode*& L) {
    L = (LinkList)malloc(sizeof(LinkList));
    L->next = NULL;
    Elemtype x;
    scanf("%d", &x);
    LNode* s;
    LNode* r = L;
    while (x != 9999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
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
    list_tail_insert(L);
    print_list(L);
    return 0;
}
