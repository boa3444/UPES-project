
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;
    long long left = 0;
    int pivot = -1;

    for (int x = 1; x <= n; x++) {
        left += x;
        long long right = total - left + x;
        if (left == right) { pivot = x; break; }
    }

    printf("%d\n", pivot);
    return 0;
}
