/*************************************************************************
	> File Name: rotating_linklist.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Jun 2023 11:53:03 PM CST
 ************************************************************************/

#include<stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;
int length(struct ListNode* head){
    //计数器一定要进行初始化
    int cnt = 0;
    while(head){
        cnt++;
        head = head->next;
    }
    return cnt;
}

struct ListNode* rotateRight(struct ListNode* head, int k){
    //判空 
    if(head == NULL)return head;
    int len = length(head);
    //对大的k值寻找等价的最小值
    k %= len;
    //判断k值是否为0
    if(k == 0)return head;
    //等距双指针     
    Node *p = head,  *q = head;
    //我的目的是把链表分为两部分，一个指针指向前一部分末尾，另一个指针指向后一部分末尾
    for(int i = 1; i <= k ; i++){
        p = p->next;
    }
    while(p->next){
        p = p->next;
        q = q->next;
    }
    Node *tmp_p = p;
    Node *tmp_q = q;
    p = q->next;
    q->next = NULL;
    tmp_p->next = head;
    while(tmp_p != tmp_q){
        tmp_p = tmp_p->next;
    }
    tmp_p->next = NULL;
    return p;
}
