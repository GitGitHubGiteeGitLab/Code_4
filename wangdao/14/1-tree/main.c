/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Wed 01 Nov 2023 04:48:05 PM CST
 ************************************************************************/

#include "function.h"

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
            printf("%c->", tnew->ch);
        }else{
            //EnQueue
            ptail->next = pnew;
            ptail = pnew;
            //层次建树
            if(!pcur->t->lchild){
                pcur->t->lchild = tnew;
                printf("%c->", tnew->ch);
            }else{
                pcur->t->rchild = tnew;
                //理论出队，到下一个队首
                pcur = pcur->next;
                printf("%c->", tnew->ch);
            }
        }
    }
    
    return 0;
}

