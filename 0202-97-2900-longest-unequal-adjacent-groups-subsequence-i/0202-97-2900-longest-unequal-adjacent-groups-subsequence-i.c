/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** getLongestSubsequence(char** words, int wordsSize, int* groups, int groupsSize, int* returnSize) {
    // Allocate the maximum possible size
    char** res = (char**)malloc(sizeof(char*) * wordsSize);
    int j = 0;

    // Always take the first word
    res[j++] = words[0];

    for (int i = 1; i < wordsSize; i++) {
        if (groups[i] != groups[i - 1]) {
            res[j++] = words[i];
        }
    }

    *returnSize = j;
    return res;
}