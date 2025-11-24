
#include <stdio.h>

int main() {
    long long pogo;
    scanf("%lld", &pogo);

    long long duck = pogo;
    if (duck < 0) duck = -duck;

    long long flip = 0;
    long long temp = duck;
    while (temp) {
        flip = flip * 10 + (temp % 10);
        temp /= 10;
    }

    int result = (flip == duck);
    printf(result ? "True\n" : "False\n");
    return 0;
}
