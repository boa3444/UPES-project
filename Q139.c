
#include <stdio.h>

int main() {
    long long L, R;
    scanf("%lld%lld", &L, &R);
    if (L > R) { long long t = L; L = R; R = t; }

    long long count = 0;
    for (long long v = L; v <= R; v++) {
        long long x = 0;
        while (x * x < v) x++;
        if (x * x == v) count++;
    }

    printf("%lld\n", count);
    return 0;
}
