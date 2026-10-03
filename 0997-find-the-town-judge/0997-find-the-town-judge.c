int findJudge(int n, int** trust, int trustSize, int* trustColSize) {
    
    // Each index corresponds to the label's total trust
    // total trust = number of people trust label - number people label trusts
    int * labelTrust = calloc(n+1, sizeof(int));

    // Go through trust array and compute trust for each label
    for (int i = 0; i < trustSize; i++) {
        labelTrust[trust[i][0]]--;
        labelTrust[trust[i][1]]++;
    }

    // Find if there exists a person (judge) with trust = n-1
    for (int j = 1; j <= n; j++) {
        if (labelTrust[j] == n - 1) {
            free(labelTrust);
            return j;
        }
    }

    free(labelTrust);
    return -1;
}