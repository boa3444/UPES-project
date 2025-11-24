
#include <stdio.h>

int main() {
    int noodle;
    scanf("%d", &noodle);

    long long arr[200000];
    for (int i = 0; i < noodle; i++) scanf("%lld", &arr[i]);

    long long x;
    scanf("%lld", &x);

    int ans = -1;
    for (int i = 0; i < noodle; i++) {
        if (arr[i] >= x) { ans = i; break; }
    }

    printf("%d\n", ans);
    return 0;
}
