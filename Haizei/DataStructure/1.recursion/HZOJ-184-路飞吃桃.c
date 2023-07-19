/*************************************************************************
	> File Name: lufeiEatingPeaches.c
	> Author: 
	> Mail: 
	> Created Time: Tue 20 Jun 2023 08:49:41 AM CST
 ************************************************************************/

#include<stdio.h>
int sum(int n){
   //递归的边界条件
    if(n == 1){
        return 1;
    }
    //递归公式
    int num = (1 + sum(n - 1)) * 2;
    return num;
}
//m是剩余桃子数，n是天数，桃子永远是前一天吃的
//int sum(int m , int n){
//if(n == 1){
//return m;
//}
//return sum((m + 1) * 2, n-1);
//}

int main(){
    int n = 0;
    scanf("%d" , &n);
    printf("%d\n" , sum(n));
    return 0;
}
