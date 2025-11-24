
#include <stdio.h>

int main() {
    char s[200005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    for (int i = 0; s[i]; i++) {
        char c = s[i];
        char d = c | 32;
        if (d=='a' || d=='e' || d=='i' || d=='o' || d=='u') continue;
        putchar(c);
    }
    return 0;
}
