/*************************************************************************
	> File Name: springboard.c
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Jun 2023 09:49:33 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 100000

int main(){
    int n;
    scanf("%d", &n);
    //数组装数据，循环做操作
    int arr[MAX_N + 5]={0};
    for(int i = 1; i <= n; i++){
       scanf("%d", &arr[i]); 
    }
    int pos = 1, cnt = 0;
    while(pos <= n){
        pos += arr[pos];
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
