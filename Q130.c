
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    long long a[205][205];
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%lld", &a[i][j]);

    long long x;
    scanf("%lld", &x);

    int ri = -1, rj = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == x) { ri = i; rj = j; break; }
        }
        if (ri != -1) break;
    }

    printf("%d %d\n", ri, rj);
    return 0;
}
