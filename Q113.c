
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    for (int i = 0; s[i]; i++) {
        char c = s[i];
        if (isupper((unsigned char)c)) c = (char)tolower((unsigned char)c);
        putchar(c);
    }
    return 0;
}
