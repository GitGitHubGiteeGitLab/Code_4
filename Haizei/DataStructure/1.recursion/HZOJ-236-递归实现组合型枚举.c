/*************************************************************************
	> File Name: recursive_implementation_of_composite_enumeration_236.c
	> Author: 
	> Mail: 
	> Created Time: Sun 25 Jun 2023 06:53:01 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 10

int arr[MAX_N + 5];

void print_one_result(int n){
    for(int i = 1; i <= n; i++){
        i != 1 && printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return ;
}


void f(int i, int j, int n, int m){
    if(i > m){
        print_one_result(m);
        return ;
    }
    //能填的数要大于剩余可选的数
    for(int k = j; k <= n && m - i <= n - k; k++){
        arr[i] = k;
        f(i + 1, k + 1, n, m);
    }
}

int main(){
    int m, n;
    scanf("%d%d", &n, &m);
    f(1, 1, n, m);
    return 0;
}
