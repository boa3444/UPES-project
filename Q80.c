
#include <stdio.h>

int main() {
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);

    long long A[200][200];
    long long B[200][200];
    long long C[200][200];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lld", &A[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%lld", &B[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            long long s = 0;
            for (int k = 0; k < m; k++) {
                s += A[i][k] * B[k][j];
            }
            C[i][j] = s;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%lld%c", C[i][j], j == p - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
