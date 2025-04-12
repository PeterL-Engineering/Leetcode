int minCostClimbingStairs(int* cost, int costSize) {
    int* dp = (int*)malloc(sizeof(int) * (costSize + 1));

    dp[costSize] = 0;
    dp[costSize - 1] = cost[costSize - 1];

    for (int i = costSize - 2; i >= 0; i--) {
        if (dp[i + 1] < dp[i + 2]) {
            dp[i] = cost[i] + dp[i + 1];
        } else {
            dp[i] = cost[i] + dp[i + 2];
        }
    }

    int result;
    if (dp[0] < dp[1]) {
        result = dp[0];
    } else {
        result = dp[1];
    }

    free(dp);
    return result;
}
