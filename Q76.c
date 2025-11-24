
#include <stdio.h>

long long gcdLL(long long a, long long b) {
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a < 0 ? -a : a;
}

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld\n", gcdLL(a, b));
    return 0;
}
