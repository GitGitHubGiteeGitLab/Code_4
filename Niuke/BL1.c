#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    char str[100] = { 0 };
    int i = 0;
    //从最后一次往前想
    while (N) {
        if ((N - 1) & 1) {
            N = (N - 2) / 2;
            str[i++] = '3';
        }
        else {
            N = (N - 1) / 2;
            str[i++] = '2';
        }
    }
    for (int j = i - 1; ~j; j--) {
        printf("%c", str[j]);
    }
    printf("\n");
    return 0;
}