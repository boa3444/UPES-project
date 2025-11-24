
#include <stdio.h>

int main() {
    int sprout;
    scanf("%d", &sprout);

    long long a = 0;
    long long b = 1;

    for (int i = 0; i < sprout; i++) {
        long long value = (i == 0) ? 0 : (i == 1) ? 1 : a + b;
        if (i >= 2) {
            a = b;
            b = value;
        }
        printf("%lld%c", value, i == sprout - 1 ? '\n' : ' ');
    }

    return 0;
}
