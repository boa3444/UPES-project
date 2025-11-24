
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

    long long g = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);
        g = (i == 0) ? x : sillyGcd(g, x);
    }

    if (g < 0) g = -g;
    printf("%lld\n", g);
    return 0;
}
