/*************************************************************************
	> File Name: factorial.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Jun 2023 08:20:54 PM CST
 ************************************************************************/

#include<stdio.h>

int f(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    return n * f(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
