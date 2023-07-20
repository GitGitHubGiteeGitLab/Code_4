/*************************************************************************
	> File Name: digit.c
	> Author: 
	> Mail: 
	> Created Time: Thu 20 Jul 2023 09:36:22 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n, digit = 0;
    scanf("%d", &n);
    do{
        digit++;
        n = n / 10;
    }while(n);//防0是0位
    printf("%d\n", digit);
    return 0;
}

