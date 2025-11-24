
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d%d", &r, &c);

    int a[200][200];
    int b[200][200];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d%c", a[i][j] + b[i][j], j == c - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
