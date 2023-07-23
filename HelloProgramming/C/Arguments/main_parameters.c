/*************************************************************************
	> File Name: main_parameters.c
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Jul 2023 07:29:54 AM CST
 ************************************************************************/

#include<stdio.h>

int main(int argc, char** agrv){
    printf("%d\n", argc);
    for(int i = 0; i < argc; i++){
        printf("%s\n", *(agrv + i));
    }
    printf("\n");
    return 0;
}

int main1(int argc, char** agrv){
    printf("%d\n", argc);
    for(int i = 0; i < argc; i++){
        printf("%s\n", agrv[i]);
    }
    printf("\n");
    return 0;
}
