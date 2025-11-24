
#include <stdio.h>

int main() {
    int pancakes;
    scanf("%d", &pancakes);

    long long syrup[100000];
    for (int fork = 0; fork < pancakes; fork++) {
        scanf("%lld", &syrup[fork]);
    }

    long long target;
    scanf("%lld", &target);

    int left = 0;
    int right = pancakes - 1;
    int ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (syrup[mid] == target) {
            ans = mid;
            break;
        } else if (syrup[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("%d\n", ans);
    return 0;
}
