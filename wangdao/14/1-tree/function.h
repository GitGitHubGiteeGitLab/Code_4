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

#endif
