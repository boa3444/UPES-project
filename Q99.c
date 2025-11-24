
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    if (n <= 1) {
        printf("False\n");
        return 0;
    }

    long long s = 1;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            s += i;
            if (i * i != n) s += n / i;
        }
    }

    printf(s == n ? "True\n" : "False\n");
    return 0;
}
