bool isSubsequence(char* s, char* t) {
    int i = 0;
    int j = 0;

    while (t[i] != '\0') {
        if (s[j] == t[i]) {
            j++;
        }

        i++;

    }

    return s[j] == '\0';
}