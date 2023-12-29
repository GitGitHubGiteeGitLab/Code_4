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

LNode* GetELem(LinkList L, int SearchPos) {
    if (SearchPos < 0)return NULL;
    int i = 0;
    while (L && i < SearchPos) {
        L = L->next;
        i++;
    }
    return L;
}

LNode* LocateElem(LinkList L, Elemtype SearchVal, int& pos) {
    if (!L) return NULL;
    L = L->next;
    int cnt = 1;
    while (L) {
        if (SearchVal == L->data) {
            pos = cnt;
            return L;
        }
        L = L->next;
        cnt++;
    }
    return NULL;
}

bool ListFrontInsert(LinkList L, int InsertPos, Elemtype InsertVal) {
    LNode* p = GetELem(L, InsertPos - 1);
    if (NULL == p)return false;
    LNode* q = (LNode*)malloc(sizeof(LNode));
    q->data = InsertVal;
    q->next = p->next;
    p->next = q;
    return true;
}

bool ListDelete(LinkList L, int DeletePos) {
    LNode* p = GetELem(L, DeletePos - 1);
    if (NULL == p)return false;
    LNode* q = p->next;
    if (NULL == q)return false;
    p->next = q->next;
    free(q);
    q = NULL;
    return true;
}

int main() {
    LinkList L;
    bool ret;
    list_tail_insert(L);
    print_list(L);
    /*
    LNode *search = NULL;
    search = GetELem(L, 2);
    if(search){
        printf("Succeeded in searching by serial number\n");
        printf("val: %d\n", search->data);
    }
    int pos;
    search = LocateElem(L, 6, pos);
    if(search){
        printf("Search by value succeeded!\n");
        printf("position: %d\n", pos);
    }

    ret = ListFrontInsert(L, 2,99);
    print_list(L);
    */
    ret = ListDelete(L, 6);
    printf("ret : %s\n", ret ? "true" : "false");
    print_list(L);
    ret = ListDelete(L, 5);
    printf("ret : %s\n", ret ? "true" : "false");
    print_list(L);
    return 0;
}
