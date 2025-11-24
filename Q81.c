
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d%d", &r, &c);

    long long A[200][200];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%lld", &A[i][j]);
        }
    }

    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%lld%c", A[i][j], i == r - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
