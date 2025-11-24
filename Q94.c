
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[100000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);

    int first = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (!first) printf(" ");
            printf("%lld", arr[i]);
            first = 0;
        }
    }
    printf("\n");

    first = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            if (!first) printf(" ");
            printf("%lld", arr[i]);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
