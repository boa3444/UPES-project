
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    long long a[205][205];
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%lld", &a[i][j]);

    int ok = 1;
    int d = (n < m) ? n : m;
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i][i] == a[j][j]) { ok = 0; break; }
        }
        if (!ok) break;
    }

    printf(ok ? "True\n" : "False\n");
    return 0;
}
