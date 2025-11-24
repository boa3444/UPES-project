
#include <stdio.h>

int main() {
    long long marsh;
    scanf("%lld", &marsh);

    if (marsh < 0) marsh = -marsh;

    long long custard = 0;
    while (marsh) {
        custard += marsh % 10;
        marsh /= 10;
    }

    printf("%lld\n", custard);
    return 0;
}
