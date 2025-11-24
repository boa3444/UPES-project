
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    if (n < 0) n = -n;

    int first = 1;
    for (long long p = 2; p * p <= n; p++) {
        int c = 0;
        while (n % p == 0) { n /= p; c++; }
        if (c) { if (!first) printf(" "); printf("%lld", p); first = 0; }
    }
    if (n > 1) { if (!first) printf(" "); printf("%lld", n); }
    printf("\n");
    return 0;
}
