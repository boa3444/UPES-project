
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[200000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);

    long long bad;
    scanf("%lld", &bad);

    int m = 0;
    for (int i = 0; i < n; i++) if (arr[i] != bad) arr[m++] = arr[i];

    for (int i = 0; i < m; i++) printf("%lld%c", arr[i], i == m - 1 ? '\n' : ' ');
    return 0;
}
