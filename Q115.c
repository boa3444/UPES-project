
#include <stdio.h>

int main() {
    char s[200005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int freq[256] = {0};
    for (int i = 0; s[i]; i++) {
        unsigned char c = (unsigned char)s[i];
        if (c != '\n') freq[c]++;
    }

    for (int i = 0; i < 256; i++) if (freq[i]) printf("%c %d\n", i, freq[i]);
    return 0;
}
