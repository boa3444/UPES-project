
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[200000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);

    long long k;
    scanf("%lld", &k);

    int cnt = 0;
    for (int i = 0; i < n; i++) if (arr[i] == k) cnt++;

    printf("%d\n", cnt);
    return 0;
}
