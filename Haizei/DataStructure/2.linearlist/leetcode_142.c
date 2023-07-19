/*************************************************************************
	> File Name: ring_linklist_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Jun 2023 10:24:38 PM CST
 ************************************************************************/

#include<stdio.h>

typedef struct ListNode Node;

struct ListNode *detectCycle(struct ListNode *head) {
    Node *fast = head; Node * slow = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)break;
    }
    if(fast == NULL || fast->next == NULL)return NULL;
    fast = head;
    while(fast != slow){
        fast = fast->next;
        slow = slow->next;
    }
    return fast;
}
