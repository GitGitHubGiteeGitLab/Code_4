/*************************************************************************
	> File Name: reverselinklist_part.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 11:21:45 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 10000
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;
//交换值即可，无需改变线性关系
struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
    int cnt = 0;
    int nums[MAX_N] = {0};
    Node *list = head;
    while(list){
        nums[cnt++] = list->val;
        list = list->next;
    }
    for(int i = left - 1, j = right - 1; i < j; i++, j--){
       // ^只能用于正整数
        // nums[i] ^= nums[j];
       // nums[j] ^= nums[i];
       // nums[i] ^= nums[j];
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp; 
    }
    list = head;
    cnt = 0;
    while(list){
        list->val = nums[cnt++];
        list = list->next;
    }
    return head;
}
