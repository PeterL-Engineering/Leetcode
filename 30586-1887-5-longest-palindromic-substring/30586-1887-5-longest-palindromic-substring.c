char* longestPalindrome(char* s) {
    int len = strlen(s);
    if (len == 0) return "";

    int start_ind = 0, max_len = 1;

    for (int i = 0; i < len; i++) {
        // Odd-length palindrome
        int left = i, right = i;
        while (left >= 0 && right < len && s[left] == s[right]) {
            if (right - left + 1 > max_len) {
                max_len = right - left + 1;
                start_ind = left;
            }
            left--;
            right++;
        }

        // Even-length palindrome
        left = i;
        right = i + 1;
        while (left >= 0 && right < len && s[left] == s[right]) {
            if (right - left + 1 > max_len) {
                max_len = right - left + 1;
                start_ind = left;
            }
            left--;
            right++;
        }
    }

    // Allocate result string (+1 for null terminator)
    char *res = (char *)malloc(sizeof(char) * (max_len + 1));
    strncpy(res, s + start_ind, max_len);
    res[max_len] = '\0';

    return res;
}