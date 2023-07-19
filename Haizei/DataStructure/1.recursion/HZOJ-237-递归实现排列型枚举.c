/*************************************************************************
	> File Name: recursively_implement_permutation_enumeration_236.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Jun 2023 08:43:31 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 10

int arr[MAX_N + 5] = {0};
int vis[MAX_N + 5] = {0};

void print_one_result(int n){
    for(int i = 1; i <= n; i++){
        i != 1 && printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return;
}

void f(int i, int n){
    if(i == n + 1){
        print_one_result(n);
        return;
    }
    for(int k = 1; k <= n; k++){
        if(vis[k])continue;
        arr[i] = k;
        vis[k] = 1;
        f(i + 1, n);
        vis[k] = 0;
    }
    return;
}

int main(){
    int n;
    scanf("%d", &n);
    f(1, n);
    return 0;
}
