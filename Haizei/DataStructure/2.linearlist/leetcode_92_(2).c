/*************************************************************************
	> File Name: reverselinklist_part_recursion.c
	> Author: 
	> Mail: 
	> Created Time: Sun 02 Jul 2023 07:46:06 PM CST
 ************************************************************************/

#include<stdio.h>

typedef struct ListNode Node;
//实现递归我们要时刻记住函数的功能，不要想它是怎么实现的
struct ListNode* reverseBetween(struct ListNode *head, int left, int right){
    if(left == 1 && right == 1)return head;
    if(left != 1){
        head->next = reverseBetween(head->next, left - 1, right -1);
    }else{
        Node *tail = head->next;
        Node *new_head = reverseBetween(head->next, 1, right - 1);
        head->next = tail->next;
        tail->next = head;
        head = new_head;
    }
    return head;
}
