/*************************************************************************
	> File Name: removeNthFromEnd.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Jun 2023 08:55:51 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
//等距双指针
typedef struct ListNode Node;
//我要找到倒数第n + 1个数
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    Node new_head , *fast = &new_head, *slow = fast;
    new_head.next = head;
    int i = 0;
    //走了n + 1步伐
    while(i <= n){
        fast = fast->next;
        i++;
    }
    while(fast){
        fast = fast->next;
        slow = slow->next;
    }
    Node *p = slow->next;
    slow->next = p->next;
    free(p);
    return new_head.next;
}
