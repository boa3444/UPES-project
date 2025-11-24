
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long A[200][200];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lld", &A[i][j]);
        }
    }

    long long mainSum = 0;
    long long otherSum = 0;

    for (int i = 0; i < n; i++) {
        mainSum += A[i][i];
        otherSum += A[i][n - 1 - i];
    }

    printf("%lld %lld\n", mainSum, otherSum);
    return 0;
}
