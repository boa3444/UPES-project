
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[100000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);

    for (int i = 0; i < n; i++) {
        int seen = 0;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) { seen = 1; break; }
        }
        if (seen) continue;

        int count = 0;
        for (int j = i; j < n; j++) {
            if (arr[j] == arr[i]) count++;
        }
        printf("%lld %d\n", arr[i], count);
    }
    return 0;
}
