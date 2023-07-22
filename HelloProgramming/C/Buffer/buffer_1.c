/*************************************************************************
	> File Name: t.c
	> Author: 
	> Mail: 
	> Created Time: Sat 22 Jul 2023 07:21:41 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>

//小尝试, 有warning但能正常运行。
int main(){
    char str[] = "hello bit\n";
    printf(str);
    return 0;
}

//输入缓存

int main6(){
    char ch1 = getchar();
    putchar(ch1);
    getchar();
    char ch2 = getchar();
    putchar(ch2);
    return 0;
}

int main5(){
    char ch1 = getchar();
    putchar(ch1);
    char ch2 = getchar();
    putchar(ch2);
    return 0;
}

//一个小实验
int main4(){
    putchar('a');
    putchar('\n');
    sleep(5);
    return 0;
}

int main3(){
    putchar('A');
    sleep(5);
    return 0;
}

//行缓存

int main2(){
    char str[] = "bit";
    for(int i = 0; i < 10; i++){
        printf("%s\n", str);
        usleep(1000 * 500);
    }
    return 0;
}
//完全缓存
int main1(){
    char str[] = "bit";
    for(int i = 0; i < 10; i++){
        printf("%s", str);
        usleep(1000 * 500);
    }
    return 0;
}
