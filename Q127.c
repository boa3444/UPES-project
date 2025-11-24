
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[205][205];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%lld", &a[i][j]);

    int ok = 1;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (a[i][j] != a[j][i]) { ok = 0; break; }

    printf(ok ? "True\n" : "False\n");
    return 0;
}
