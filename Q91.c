
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[100000];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long first = -9223372036854775807LL - 1;
    long long second = first;

    for (int i = 0; i < n; i++) {
        long long x = arr[i];
        if (x > first) {
            second = first;
            first = x;
        } else if (x > second && x < first) {
            second = x;
        }
    }

    if (second == -9223372036854775807LL - 1) {
        printf("-1\n");
    } else {
        printf("%lld\n", second);
    }
    return 0;
}
