int max(int a, int b) {
    return a > b ? a : b;
}

int lengthOfLongestSubstring(char* s) {

    // Step 1: Initialize counting/comparison variables

    int* lastSeen = malloc(sizeof(int) * 256);
    memset(lastSeen, -1, sizeof(int) * 256);
    
    int     curStart    = 0;
    int     curLen      = 0;
    int     maxLen      = 0;

    // Step 2: Parse through given string s

    for (int i = 0; s[i] != '\0'; i++) {

        if (lastSeen[s[i]] >= curStart) {
            curStart = lastSeen[s[i]] + 1;
        }

        curLen = i - curStart + 1;

        maxLen = max(maxLen, curLen);
        lastSeen[s[i]] = i;

    }

    return maxLen;
}