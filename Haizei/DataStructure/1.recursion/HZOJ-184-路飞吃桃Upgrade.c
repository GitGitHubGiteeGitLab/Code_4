/*************************************************************************
	> File Name: lufeiEatingPeachesUpgrade.c
	> Author: 
	> Mail: 
	> Created Time: Tue 20 Jun 2023 09:26:38 AM CST
 ************************************************************************/

#include<stdio.h>
int sum(int m , int n){
	if(n == 1){

		return m;
	}

	return sum((m + 1) * 2, n-1);
}

int main(){
    int n = 0;
    scanf("%d" , &n);
    printf("%d\n" , sum( 1 ,n));
    return 0;
    }

