
#include <stdio.h>

long long powerLL(long long base, int exp) {
    long long r = 1;
    for (int i = 0; i < exp; i++) r *= base;
    return r;
}

int countDigits(long long x) {
    if (x == 0) return 1;
    int d = 0;
    if (x < 0) x = -x;
    while (x) {
        d++;
        x /= 10;
    }
    return d;
}

int main() {
    long long goo;
    scanf("%lld", &goo);

    long long x = goo;
    if (x < 0) x = -x;

    int digits = countDigits(x);
    long long t = x;
    long long sum = 0;

    while (t) {
        int d = t % 10;
        sum += powerLL(d, digits);
        t /= 10;
    }

    int ok = (sum == x);
    printf(ok ? "True\n" : "False\n");
    return 0;
}
