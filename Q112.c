
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int words = 0;
    int in = 0;

    for (int i = 0; s[i]; i++) {
        if (!isspace((unsigned char)s[i]) && s[i] != '\n') {
            if (!in) { words++; in = 1; }
        } else {
            in = 0;
        }
    }

    printf("%d\n", words);
    return 0;
}
