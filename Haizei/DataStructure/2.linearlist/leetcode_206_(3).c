/*************************************************************************
	> File Name: reverselinklist_3.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Jul 2023 02:48:51 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N  5005
typedef struct LinkNode Node;

//get链表结点个数
int getLength(struct ListNode* head){
    int cnt = 0;
    Node *cur = head;
    while(cur){
        cnt += 1;
        cur = cur->next;
    }
    return cnt;
}

struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL || head->next == NULL)return head;
    int len = getLength(head);
    int arr[MAX_N] = {0};
   
    //将链表结点中的数据存入数组 
    Node *q = head;
    for(int i = 0; i < len; i++){
        arr[i] = q->val;
        q = q->next;
    }
    
    //将数组中的数据反向赋值给结点的数据域
    Node *p = head;
    for(int j = len - 1; j >= 0; j--){
        p->val = arr[j];
        p = p->next;
    }
    return head;
}
