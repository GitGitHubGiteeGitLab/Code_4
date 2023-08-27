#include <stdio.h>

int main() {
    int max;
    scanf("%d", &max);
    int arr[max];
    int sum = 0;
    for (int i = 0; i < max; i++) {
        scanf("%d", arr + i);
        sum += arr[i];
    }
    printf("%d\n", (1 + max) * max / 2 - sum);
    return 0;
}