
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    long long a[205][205];
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%lld", &a[i][j]);

    int top = 0, left = 0, bottom = n - 1, right = m - 1;
    int first = 1;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++) { if (!first) printf(" "); printf("%lld", a[top][j]); first = 0; }
        top++;
        for (int i = top; i <= bottom; i++) printf(" %lld", a[i][right]);
        right--;
        if (top <= bottom) { for (int j = right; j >= left; j--) printf(" %lld", a[bottom][j]); bottom--; }
        if (left <= right) { for (int i = bottom; i >= top; i--) printf(" %lld", a[i][left]); left++; }
    }

    printf("\n");
    return 0;
}
