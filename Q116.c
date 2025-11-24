
#include <stdio.h>

int main() {
    char s[200005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int best = 0;

    for (int start = 0; s[start] && s[start] != '\n'; start++) {
        int seen[256] = {0};
        int len = 0;
        for (int i = start; s[i] && s[i] != '\n'; i++) {
            unsigned char c = (unsigned char)s[i];
            if (seen[c]) break;
            seen[c] = 1;
            len++;
            if (len > best) best = len;
        }
    }

    printf("%d\n", best);
    return 0;
}
