
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);
        sum += x;
    }

    double avg = n ? (double)sum / n : 0.0;
    printf("%.6f\n", avg);
    return 0;
}
