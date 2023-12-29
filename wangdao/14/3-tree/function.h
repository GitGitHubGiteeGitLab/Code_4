/*************************************************************************
	> File Name: function.h
	> Author: 
	> Mail: 
	> Created Time: Wed 01 Nov 2023 04:48:15 PM CST
 ************************************************************************/

#ifndef _FUNCTION_H
#define _FUNCTION_H
#include <stdio.h>
#include <stdlib.h>

typedef char BiElemType;
typedef struct BiTNode{
    BiElemType ch;
    struct BiTNode *lchild;
    struct BiTNode *rchild;
}BiTNode, *BiTree;

//Queue-linklist
typedef struct tag{
    BiTree t;//BiTNOde *
    struct tag *next;
}tag_t, *ptag_t;

typedef BiTree Elemtype;

typedef struct LinkNode {
    struct LinkNode* next;
    Elemtype data;
}LinkNode;

typedef struct {
    LinkNode* front, * rear;
}LinkQueue;

void InitQueue(LinkQueue& Q);
void EnQueue(LinkQueue& Q, Elemtype x);
bool isEmpty(LinkQueue Q);
bool DeQueue(LinkQueue& Q, Elemtype &x);
#endif
