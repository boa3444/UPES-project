
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[100000];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j + 1 < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                long long tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%lld%c", arr[i], i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
