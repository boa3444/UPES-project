
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    long long a[205][205];
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%lld", &a[i][j]);

    int first = 1;
    for (int j = 0; j < m; j++) { if (!first) printf(" "); printf("%lld", a[0][j]); first = 0; }
    for (int i = 1; i < n; i++) printf(" %lld", a[i][m - 1]);
    if (n > 1) for (int j = m - 2; j >= 0; j--) printf(" %lld", a[n - 1][j]);
    if (m > 1) for (int i = n - 2; i > 0; i--) printf(" %lld", a[i][0]);

    printf("\n");
    return 0;
}
