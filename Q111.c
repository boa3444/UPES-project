
#include <stdio.h>

int main() {
    char s[200005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int L = 0;
    while (s[L] && s[L] != '\n') L++;

    int ok = 1;
    for (int i = 0, j = L - 1; i < j; i++, j--) {
        if (s[i] != s[j]) { ok = 0; break; }
    }

    printf(ok ? "True\n" : "False\n");
    return 0;
}
