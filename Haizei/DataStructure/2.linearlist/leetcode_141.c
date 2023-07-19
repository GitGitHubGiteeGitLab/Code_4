/*************************************************************************
	> File Name: Ringlinkedlist.c
	> Author: 
	> Mail: 
	> Created Time: Wed 21 Jun 2023 10:45:12 AM CST
 ************************************************************************/
#include <stdio.h>
#include <stdbool.h>

typedef struct ListNode Node;

bool hasCycle(struct ListNode *head){
    if(head == NULL || head->next == NULL)return false;
    Node *fast, *slow;
    fast = slow = head;
    for(int i = 0; ; i++){
        (i & 1) && (slow = slow->next);
        fast = fast->next;
        if(fast == slow)return true;
        if(fast == NULL)return false;
    }
}


