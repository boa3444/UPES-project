
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    long long left[200000], right[200000];
    for (int i = 0; i < a; i++) scanf("%lld", &left[i]);
    for (int j = 0; j < b; j++) scanf("%lld", &right[j]);

    int i = 0, j = 0;
    while (i < a || j < b) {
        if (j == b || (i < a && left[i] <= right[j])) { printf("%lld ", left[i++]); }
        else { printf("%lld ", right[j++]); }
    }
    printf("\n");
    return 0;
}
