
#include <stdio.h>

int main() {
    int bananaCount;
    if (scanf("%d", &bananaCount) != 1) return 0;

    long long wobblySum = 0;
    for (int goofy = 0; goofy < bananaCount; goofy++) {
        long long silly;
        scanf("%lld", &silly);
        wobblySum += silly;
    }

    printf("%lld\n", wobblySum);
    return 0;
}
