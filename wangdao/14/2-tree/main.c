/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Wed 01 Nov 2023 04:48:05 PM CST
 ************************************************************************/

#include "function.h"

void PreOrder(BiTree root){
    if(root){
        putchar(root->ch);
        PreOrder(root->lchild);
        PreOrder(root->rchild);
    }
    return;
}

void InOrder(BiTree root){
    if(root){
        InOrder(root->lchild);
        putchar(root->ch);
        InOrder(root->rchild);
    }
}

void PostOrder(BiTree root){
    if(root){
        PostOrder(root->lchild);
        PostOrder(root->rchild);
        putchar(root->ch);
    }
}

int main(){
    
    BiTree tree = NULL;//root
    BiTree tnew;//new BiTNode

    ptag_t pnew, pcur, phead, ptail;
    phead = ptail = pnew = pcur = NULL;
    BiElemType ch;
    
    while(scanf("%c", &ch)){
        if(ch == '\n')break;
        //申请BiTNode
        tnew = (BiTree)calloc(1, sizeof(BiTNode));
        tnew->ch = ch;
        //申请tag
        pnew = (ptag_t)calloc(1, sizeof(tag_t));
        pnew->t = tnew;//tag-BiTNode
        if(!tree){
            tree = tnew;
            phead = ptail = pcur = pnew;
        }else{
            //EnQueue
            ptail->next = pnew;
            ptail = pnew;
            //层次建树
            if(!pcur->t->lchild){
                pcur->t->lchild = tnew;
            }else{
                pcur->t->rchild = tnew;
                //理论出队，到下一个队首
                pcur = pcur->next;
            }
        }
    }
    printf("------PreOrder------\n"); 
    PreOrder(tree);
    printf("\n------InOrder------\n"); 
    InOrder(tree);
    printf("\n------PostOrder------\n"); 
    PostOrder(tree);
    printf("\n");
    return 0;
}

