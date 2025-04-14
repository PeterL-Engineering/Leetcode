#include <string.h>

int maxRepeating(char* sequence, char* word) {
    int maxCount = 0;
    int wordLen = strlen(word);
    int seqLen = strlen(sequence);

    for (int i = 0; i <= seqLen - wordLen; i++) {
        int count = 0;
        while (strncmp(&sequence[i + count * wordLen], word, wordLen) == 0) {
            count++;
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }

    return maxCount;
}
