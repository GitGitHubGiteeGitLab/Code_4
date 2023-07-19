/*************************************************************************
	> File Name: reverselinklist_part_use_reverselinklist_2.c
	> Author: 
	> Mail: 
	> Created Time: Sun 02 Jul 2023 12:57:51 PM CST
 ************************************************************************/

#include<stdio.h>

typedef struct ListNode Node;

struct ListNode* reverseList(struct ListNode *head){
    Node *cur = head;
    Node *next;
    Node *prev = NULL;
    while(cur){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
/*
这个函数的实现思路是：
创建一个哑节点作为新的链表头，将其指向原链表头。
找到反转区间的前一个节点pre，以及反转区间的起始节点start和结束节点end。
断开反转区间与后面节点的链接，将反转区间内的链表节点反转。
将反转后的链表连接回原链表。
返回新的链表头。*
*/
struct ListNode* reverseBetween(struct ListNode *head, int left, int right){
    if(head == NULL || head->next == NULL || left == right)return head;
    
    //creat a vitrual head
    Node new_head;
    new_head.next = head;
    Node *dummy = &new_head;
     
    //find the previous node of the left
    Node *prev = dummy;
    for(int i = 0; i < left - 1; i++){
        prev = prev->next;
    }

    //find the start and the end
    Node *start = prev->next;
    Node *end = start;
    for(int i = 0; i < right - left; i++){
        end = end->next;
    }
    
    // cut the part
    Node* next = end->next;
    end->next = prev->next = NULL;

    // reverse 
    Node *reverseHead = reverseList(start);

    //link the part to the origin
    prev->next = reverseHead;
    start->next = next;

    return dummy->next;
}
