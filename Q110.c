
#include <stdio.h>
#include <ctype.h>

int main() {
    char a[200005];
    char b[200005];

    if (!fgets(a, sizeof(a), stdin)) return 0;
    if (!fgets(b, sizeof(b), stdin)) return 0;

    int freqA[256] = {0};
    int freqB[256] = {0};

    for (int i = 0; a[i]; i++) {
        unsigned char c = (unsigned char)tolower(a[i]);
        if (c != '\n' && c != ' ') freqA[c]++;
    }
    for (int i = 0; b[i]; i++) {
        unsigned char c = (unsigned char)tolower(b[i]);
        if (c != '\n' && c != ' ') freqB[c]++;
    }

    int ok = 1;
    for (int i = 0; i < 256; i++) if (freqA[i] != freqB[i]) { ok = 0; break; }

    printf(ok ? "True\n" : "False\n");
    return 0;
}
