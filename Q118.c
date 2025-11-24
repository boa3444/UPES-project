
#include <stdio.h>

long long sillyGcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) { long long t = a % b; a = b; b = t; }
    return a;
}

int main() {
    int n;
    scanf("%d", &n);

    long long l = 1;
    for (int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);
        long long g = sillyGcd(l, x);
        l = l / g * x;
        if (l < 0) l = -l;
    }

    printf("%lld\n", l);
    return 0;
}
