int tribonacci(int n) {
    if (n < 2) return n;
    if (n == 2) return 1;

    int* dp = (int*)calloc(n + 1, sizeof(int));
    dp[1] = dp[2] = 1;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    int res = dp[n];
    free(dp);
    return res;
    
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna