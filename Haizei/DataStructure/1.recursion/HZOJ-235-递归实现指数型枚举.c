/*************************************************************************
	> File Name: Recursive_implementation_of_exponential_enumeration.c
	> Author: 
	> Mail: 
	> Created Time: Sat 24 Jun 2023 08:36:04 AM CST
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
    return;
}

void f(int i, int j, int n){
    if(j > n){
        return ;
    }
    for(int k = j;k <= n; k++){
        arr[i] = k;
        print_one_result(i);
        f(i + 1, k + 1, n);
    }
    return;
}

int main(){
    int n;
    scanf("%d", &n);
    f(1, 1, n); 
    return 0;
}
