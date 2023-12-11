#include <stdio.h>

int main(){
    int a;
    char ch;
    float f;
    scanf("%d %c %f", &a, &ch, &f);
    printf("%.2f\n", a + ch + f);
}