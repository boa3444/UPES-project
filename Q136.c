
#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);

    long long temp = a;
    a = b;
    b = temp;

    printf("%lld %lld\n", a, b);
    return 0;
}
