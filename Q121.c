
#include <stdio.h>

int main() {
    unsigned long long x;
    scanf("%llu", &x);

    char buf[256];
    int p = 0;

    if (x == 0) { puts("0"); return 0; }
    while (x) { buf[p++] = (x % 2) ? '1' : '0'; x /= 2; }
    for (int i = p - 1; i >= 0; i--) putchar(buf[i]);
    putchar('\n');
    return 0;
}
