
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[200000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);

    int k;
    scanf("%d", &k);

    if (n) { k %= n; if (k < 0) k += n; }

    long long bowl[200000];
    for (int i = 0; i < n; i++) {
        int j = (i - k + n) % n;
        bowl[i] = arr[j];
    }

    for (int i = 0; i < n; i++) {
        printf("%lld%c", bowl[i], i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
