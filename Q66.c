
#include <stdio.h>

int main() {
    int smol;
    scanf("%d", &smol);

    long long giggle[100000];
    for (int burp = 0; burp < smol; burp++) {
        scanf("%lld", &giggle[burp]);
    }

    for (int burp = smol - 1; burp >= 0; burp--) {
        printf("%lld%c", giggle[burp], burp ? ' ' : '\n');
    }
    return 0;
}
