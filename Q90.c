
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[100000];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    int m = 0;
    for (int i = 0; i < n; i++) {
        int ok = 1;
        for (int j = 0; j < m; j++) {
            if (arr[j] == arr[i]) {
                ok = 0;
                break;
            }
        }
        if (ok) arr[m++] = arr[i];
    }

    for (int i = 0; i < m; i++) {
        printf("%lld%c", arr[i], i == m - 1 ? '\n' : ' ');
    }
    return 0;
}
