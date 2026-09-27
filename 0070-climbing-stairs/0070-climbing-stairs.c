int climbStairs(int n) {
    if (n <= 1) return 1;

    int a = 1; // ways to reach step 0
    int b = 1; // ways to reach step 1

    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna