/*************************************************************************
	> File Name: 1.c
	> Author: 
    > Mail: 
	> Created Time: Thu 20 Jul 2023 10:00:13 PM CST
 ************************************************************************/

#include<stdio.h>

//fgets一行一行读入
int main(){
    FILE *pFile = fopen("c", "r");
    if(!pFile)return -1;

    char buffer[100] = {0};
    while(fgets(buffer, 100, pFile)){
        printf("%s", buffer);
    }
    fclose(pFile);
    return 0;
}

//判断文件状态:feof
int main6(){
    FILE *pFile = fopen("c", "w");
    if(!pFile)return -1;
    char ch;

    while(1){
        ch = fgetc(pFile);
        if(ch == EOF){
            if(feof(pFile)){
                printf("End of file\n");
            }else if(ferror(pFile)){
                printf("file access error\n");
            }
            break;
        }
        putchar(ch);
    }

    fclose(pFile);
    return 0;
}

//判断文件状态:feof
int main5(){
    FILE *pFile = fopen("c", "r");
    if(!pFile)return -1;
    char ch;

    while(1){
        ch = fgetc(pFile);
        if(ch == EOF){
            if(feof(pFile)){
                printf("End of file\n");
            }else if(ferror(pFile)){
                printf("file access error\n");
            }
            break;
        }
        putchar(ch);
    }

    fclose(pFile);
    return 0;
}
//清理输入缓存区
int main4(){
    FILE *pFile = fopen("c", "r");
    if(!pFile)return -1;

    int n;
    double f;
    char ch;

    fscanf(pFile, "%d", &n);
    fscanf(pFile, "%lf", &f);
    fgetc(pFile);
    fscanf(pFile, "%c", &ch);

    printf("%d\n" ,n);
    printf("%lf\n" ,f);
    printf("%c\n" ,ch);
    fclose(pFile);
    return 0;
}

//从文见中读取数据
int main3(){
    FILE *pFile = fopen("c", "r");
    if(!pFile)return -1;

    int n;
    double f;
    char ch;

    fscanf(pFile, "%d", &n);
    fscanf(pFile, "%lf", &f);
    fscanf(pFile, "%c", &ch);

    printf("%d\n" ,n);
    printf("%lf\n" ,f);
    printf("%c\n" ,ch);
    fclose(pFile);
    return 0;
}

//向一个文件里写入一些数值和字符
int main2(){
    FILE *pFile = fopen("c", "w");
    if(!pFile){
        return -1;
    }

    int n = 123;
    double f = 3.1415;
    char ch = 'A';

    fprintf(pFile, "%d\n", n);
    fprintf(pFile, "%lf\n", f);
    fprintf(pFile, "%c\n", ch);

    fclose(pFile);
    return 0;
}

//打开一个文件
int main1(){
    FILE *pFile = fopen("c", "w");
    if(!pFile){
        return -1;
    }else {
        return 0;
    }
}
