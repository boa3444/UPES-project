
#include <stdio.h>

long long pw(long long a, long long b) {
    long long r = 1;
    while (b) {
        if (b & 1) r *= a;
        a *= a;
        b >>= 1;
    }
    return r;
}

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld\n", pw(a, b));
    return 0;
}
