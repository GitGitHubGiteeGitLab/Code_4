/*************************************************************************
	> File Name: reverselinklist_2.c
	> Author: 
	>递归实现的思路：假定当前函数递归的，功能是反转链表，我们把head之后的结点反转，再把head指向的结点添加到最后
    > Mail: 
	> Created Time: Mon 19 Jun 2023 03:33:08 PM CST
 ************************************************************************/

#include<stdio.h>
typedef struct ListNode Node;  // 定义 ListNode 结构体的别名为 Node

struct ListNode* reverseList(struct ListNode* head){//1.定义函数功能
    if(head == NULL || head->next == NULL)return head;//2.边界条件
    Node *tail = head->next;//头结点的下一结点是反转后的尾节点
    Node *new_head = reverseList(head->next);//3.利用reverselist反转head结点后的链表
   //尾插法
    head->next = tail->next;
    tail->next = head;
    return new_head;
}
