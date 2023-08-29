int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int findKth(int* a, int aLen, int n, int K) {
    // write code here
    qsort(a, aLen, sizeof(int), cmp);
    return a[K - 1];
}