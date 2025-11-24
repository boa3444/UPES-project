
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

    long long g = gcdLL(a, b);
    long long l = a / g * b;
    if (l < 0) l = -l;

    printf("%lld\n", l);
    return 0;
}
