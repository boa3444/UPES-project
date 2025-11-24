
#include <stdio.h>

int main() {
    char s[200005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    long long val = 0;
    for (int i = 0; s[i] && s[i] != '\n'; i++) {
        if (s[i] == '0' || s[i] == '1') {
            val = val * 2 + (s[i] == '1');
        }
    }

    printf("%lld\n", val);
    return 0;
}
