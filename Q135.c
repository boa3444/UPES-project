
#include <stdio.h>

int main() {
    unsigned long long x;
    scanf("%llu", &x);

    int bits = 0;
    while (x) { if (x % 2) bits++; x /= 2; }

    printf("%d\n", bits);
    return 0;
}
