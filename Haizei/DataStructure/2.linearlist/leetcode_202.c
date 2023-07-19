/*************************************************************************
	> File Name: happy_number.c
	> Author: 
	> Mail: 
	> Created Time: Fri 23 Jun 2023 01:37:22 PM CST
 ************************************************************************/
//happy_number具有的特定的指向关系说明它就是一个大链表，指向1，可以看成指向NULL，带环的链表才不会只向空地址，，这是一个判环的问题
#include<stdio.h>
#include<stdbool.h>

int getnext(int n){
    int x, y = 0;
    while(n){
        x = n % 10;
        y += x * x;
        n /= 10;
    }
    return y;
}

bool isHappy(int n){
    if(n == 1)return true;
   int fast = n, slow = n;
    //与链表不同的是，一旦为平方和为1，永远为1
    while(fast != 1){
        fast = getnext(getnext(fast));
        slow = getnext(slow);
        if(fast == slow && slow != 1)return false;
    }
    return true;
   
}

int main(){
    int n;
    scanf("%d", &n);
    bool ret = isHappy(n);
    if(ret){
        printf("%d是快乐数\n", n);
    }else{
        printf("%d不是快乐数\n", n);
    }
    return 0;
}
