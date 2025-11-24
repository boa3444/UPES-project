
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[200000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);

    long long target;
    scanf("%lld", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) { printf("%d %d\n", i, j); return 0; }
        }
    }

    printf("-1 -1\n");
    return 0;
}
