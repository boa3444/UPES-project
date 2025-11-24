
#include <stdio.h>

int main() {
    long long jelly;
    scanf("%lld", &jelly);

    if (jelly < 2) {
        printf("False\n");
        return 0;
    }

    for (long long pea = 2; pea * pea <= jelly; pea++) {
        if (jelly % pea == 0) {
            printf("False\n");
            return 0;
        }
    }

    printf("True\n");
    return 0;
}
