
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[200000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);

    long long best = -9223372036854775807LL - 1;
    for (int i = 0; i < n; i++) {
        long long sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum > best) best = sum;
        }
    }

    printf("%lld\n", best);
    return 0;
}
