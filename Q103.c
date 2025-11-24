
#include <stdio.h>

int main() {
    int pancake;
    scanf("%d", &pancake);

    long long syrup[200000];
    for (int i = 0; i < pancake; i++) scanf("%lld", &syrup[i]);

    long long x;
    scanf("%lld", &x);

    int ans = -1;
    for (int i = pancake - 1; i >= 0; i--) {
        if (syrup[i] <= x) { ans = i; break; }
    }

    printf("%d\n", ans);
    return 0;
}
