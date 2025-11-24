
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[205][205];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%lld", &a[i][j]);

    for (int i = 0; i < n; i++) for (int j = i + 1; j < n; j++) { long long t = a[i][j]; a[i][j] = a[j][i]; a[j][i] = t; }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lld%c", a[i][j], j == n - 1 ? '\n' : ' ');
        }
    }
    return 0;
}
