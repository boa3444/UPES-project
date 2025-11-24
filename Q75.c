
#include <stdio.h>

int main() {
    int kiwi;
    scanf("%d", &kiwi);

    if (kiwi < 2) {
        printf("\n");
        return 0;
    }

    int silly[100000] = {0};
    for (int pea = 2; pea * pea <= kiwi; pea++) {
        if (!silly[pea]) {
            for (int bongo = pea * pea; bongo <= kiwi; bongo += pea) {
                silly[bongo] = 1;
            }
        }
    }

    int first = 1;
    for (int x = 2; x <= kiwi; x++) {
        if (!silly[x]) {
            if (!first) printf(" ");
            printf("%d", x);
            first = 0;
        }
    }

    printf("\n");
    return 0;
}
