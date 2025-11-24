
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    long long a[100000];
    long long b[100000];

    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    for (int j = 0; j < m; j++) scanf("%lld", &b[j]);

    for (int i = 0; i < n; i++) printf("%lld ", a[i]);
    for (int j = 0; j < m; j++) printf("%lld%c", b[j], j == m - 1 ? '\n' : ' ');
    return 0;
}
