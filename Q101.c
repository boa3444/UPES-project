
#include <stdio.h>

int main() {
    int pix;
    scanf("%d", &pix);

    long long silly[200000];
    for (int i = 0; i < pix; i++) scanf("%lld", &silly[i]);

    long long target;
    scanf("%lld", &target);

    int first = -1;
    int last = -1;

    for (int i = 0; i < pix; i++) {
        if (silly[i] == target) { first = i; break; }
    }
    for (int i = pix - 1; i >= 0; i--) {
        if (silly[i] == target) { last = i; break; }
    }

    printf("%d %d\n", first, last);
    return 0;
}
