
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[200000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);

    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == i) { ans = i; break; }
    }

    printf("%d\n", ans);
    return 0;
}
