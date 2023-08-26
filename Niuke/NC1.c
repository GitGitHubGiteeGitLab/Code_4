#define N 100000
char* solve(char* s, char* t) {
    // write code here
    char* string = (char*)calloc(N + 5, sizeof(char));
    int len_s = strlen(s), len_t = strlen(t);
    int i = len_s - 1, j = len_t - 1, k = 0, add = 0;
    for (; ~j && ~i; j--, i--, k++) {
        //字符显示的数字和数字的区别
        //模拟加法过程
        string[k] = (s[i] + t[j] - 2 * '0' + add) % 10 + '0';
        add = (s[i] + t[j] - 2 * '0' + add) / 10;
    }

    if (i == j) {
        if (add == 1)string[k++] = '1';
        add = 0;
    }
    while (i < j) {
        string[k] = (add + t[j] - '0') % 10 + '0';
        add = (add + t[j] - '0') / 10;
        k++, j--;
    }
    while (i > j) {
        string[k] = (add + s[i] - '0') % 10 + '0';
        add = (add + s[i] - '0') / 10;
        k++, i--;
    }
    if (add == 1)string[k++] = '1';
    for (int i = 0, j = strlen(string) - 1; i < j; i++, j--) {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
    return string;
}