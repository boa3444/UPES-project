
#include <stdio.h>

int main() {
    char s[200005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int freq[256] = {0};
    for (int i = 0; s[i] && s[i] != '\n'; i++) freq[(unsigned char)s[i]]++;

    for (int i = 0; i < 256; i++) while (freq[i]--) putchar(i);
    putchar('\n');
    return 0;
}
