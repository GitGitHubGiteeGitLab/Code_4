/*************************************************************************
	> File Name: reverselinklist_1.c
	> Author: 
	> Mail: 
	> Created Time: Mon 19 Jun 2023 12:44:47 PM CST
 ************************************************************************/

#include<stdio.h>
typedef struct ListNode Node;  // 定义 ListNode 结构体的别名为 Node

struct ListNode* reverseList(struct ListNode* head) {
    Node *prev = NULL;  // 用于指向反转链表头节点
    Node *next;  // 用于指向原链表当前节点的下一节点
    Node *cur = head;  // 用于指向当前节点，并且配合 prev 指针构建反转链表

    while (cur) {
        next = cur->next;  // 保存当前节点的下一节点
        cur->next = prev;  // 将当前节点指向反转链表的头部
        prev = cur;  // 更新 prev 指针为当前节点
        cur = next;  // 更新 cur 指针为下一节点
    }

    return prev;  // 返回反转后的链表头节点
}

