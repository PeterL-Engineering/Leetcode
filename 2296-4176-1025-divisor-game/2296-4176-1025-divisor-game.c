bool helper(int n, int* memo) {
    if (n == 1) return false;
    if (memo[n] != -1) return memo[n];

    for (int x = 1; x < n; x++) {
        if (n % x == 0) {
            if (!helper(n - x, memo)) {
                memo[n] = 1;
                return true;
            }
        }
    }

    memo[n] = 0;
    return false;
}

bool divisorGame(int n) {
    int* memo = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = 0; i <= n; i++) memo[i] = -1;

    bool res = helper(n, memo);
    free(memo);
    return res;
}
