int* getRow(int rowIndex, int* returnSize) {
    int* row = calloc((rowIndex + 1), sizeof(int));
    
    row[0] = 1;

    for (int i = 1; i <= rowIndex; i++) {
        for (int j = i; j > 0; j--) {
            long long sum = (long long)row[j] + row[j - 1];
            row[j] = (int)sum;
        }
    }

    *returnSize = rowIndex + 1;
    return row;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna