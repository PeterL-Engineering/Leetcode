/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int *res = (int *)calloc(n + 1, sizeof(int));

    for (int i = 1; i <= n; i++) {
        res[i] = res[i >> 1] + (i & 1);
    }

    *returnSize = n + 1;
    return res;
}
