
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[100000];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) minIdx = j;
        }
        long long t = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = t;
    }

    for (int i = 0; i < n; i++) {
        printf("%lld%c", arr[i], i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
