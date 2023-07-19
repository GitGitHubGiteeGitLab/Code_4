/*************************************************************************
	> File Name: springboard_recursion.c
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Jun 2023 10:17:29 AM CST
 ************************************************************************/
//递归函数f用于小球从位置i开始弹跳直至跳出的次数
//i > n, return 0; i == n, return 1;
//

#include<stdio.h>
#define MAX_N 100000

int f(int pos, int arr[], int n){
    if(pos > n)return 0;
    if(pos == n)return 1;
    return f(pos + arr[pos], arr, n) + 1;
}

int main(){
    int n, arr[MAX_N + 5] = {0};
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", f(1, arr, n));
    return 0;
}
